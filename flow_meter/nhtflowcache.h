/**
 * \file nhtflowcache.h
 * \brief "NewHashTable" flow cache
 * \author Martin Zadnik <zadnik@cesnet.cz>
 * \author Vaclav Bartos <bartos@cesnet.cz>
 * \author Jiri Havranek <havraji6@fit.cvut.cz>
 * \date 2014
 * \date 2015
 * \date 2016
 */
/*
 * Copyright (C) 2014-2016 CESNET
 *
 * LICENSE TERMS
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name of the Company nor the names of its contributors
 *    may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * ALTERNATIVELY, provided that this notice is retained in full, this
 * product may be distributed under the terms of the GNU General Public
 * License (GPL) version 2 or later, in which case the provisions
 * of the GPL apply INSTEAD OF those given above.
 *
 * This software is provided ``as is'', and any express or implied
 * warranties, including, but not limited to, the implied warranties of
 * merchantability and fitness for a particular purpose are disclaimed.
 * In no event shall the company or contributors be liable for any
 * direct, indirect, incidental, special, exemplary, or consequential
 * damages (including, but not limited to, procurement of substitute
 * goods or services; loss of use, data, or profits; or business
 * interruption) however caused and on any theory of liability, whether
 * in contract, strict liability, or tort (including negligence or
 * otherwise) arising in any way out of the use of this software, even
 * if advised of the possibility of such damage.
 *
 */
#ifndef NHTFLOWCACHE_H
#define NHTFLOWCACHE_H

#include <string>

#include "flow_meter.h"
#include "flowcache.h"
#include "flowifc.h"
#include "flowexporter.h"

using namespace std;

#define MAX_KEY_LENGTH 37

class Flow
{
   uint64_t hash;
   char key[MAX_KEY_LENGTH];

public:
   bool empty_flow;
   FlowRecord flow_record;

   void erase()
   {
      flow_record.removeExtensions();
      memset(&flow_record, 0, sizeof(flow_record));
      empty_flow = true;
   }

   Flow()
   {
      erase();
   };
   ~Flow()
   {
   };

   inline bool is_empty() const;
   bool belongs(uint64_t pkt_hash, char *pkt_key, uint8_t key_len) const;
   void create(const Packet &pkt, uint64_t pkt_hash, char *pkt_key, uint8_t key_len);
   void update(const Packet &pkt);
};

class NHTFlowCache : public FlowCache
{
   bool print_stats;
   uint8_t key_len;
   int line_size;
   int size;
#ifdef FLOW_CACHE_STATS
   uint64_t empty;
   uint64_t not_empty;
   uint64_t hits;
   uint64_t expired;
   uint64_t flushed;
   uint64_t lookups;
   uint64_t lookups2;
#endif /* FLOW_CACHE_STATS */
   struct timeval current_ts;
   struct timeval last_ts;
   struct timeval active;
   struct timeval inactive;
   char key[MAX_KEY_LENGTH];
   Flow **flow_array;

public:
   NHTFlowCache(const options_t &options)
   {
      line_size = options.flow_line_size;
      size = options.flow_cache_size;
      last_ts.tv_sec = 0;
#ifdef FLOW_CACHE_STATS
      empty = 0;
      not_empty = 0;
      hits = 0;
      expired = 0;
      flushed = 0;
      lookups = 0;
      lookups2 = 0;
#endif /* FLOW_CACHE_STATS */
      print_stats = options.print_stats;
      active = options.active_timeout;
      inactive = options.inactive_timeout;

      flow_array = new Flow*[size];
      for (int i = 0; i < size; i++) {
         flow_array[i] = new Flow();
      }
   };
   ~NHTFlowCache()
   {
      for (int i = 0; i < size; i++) {
         delete flow_array[i];
      }
      delete [] flow_array;
   };

// Put packet into the cache (i.e. update corresponding flow record or create a new one)
   virtual int put_pkt(Packet &pkt);
   virtual void init();
   virtual void finish();

   int export_expired(bool export_all);

protected:
   bool create_hash_key(Packet &pkt);
   void print_report();
};

#endif
