#ifndef _UR_FIELDS_H_
#define _UR_FIELDS_H_

/************* THIS IS AUTOMATICALLY GENERATED FILE, DO NOT EDIT *************/
#include <unirec/unirec.h>

#define F_DNS_IP   0
#define F_DNS_IP_T   ip_addr_t
#define F_DST_IP   1
#define F_DST_IP_T   ip_addr_t
#define F_SRC_IP   2
#define F_SRC_IP_T   ip_addr_t
#define F_BYTES   3
#define F_BYTES_T   uint64_t
#define F_LINK_BIT_FIELD   4
#define F_LINK_BIT_FIELD_T   uint64_t
#define F_TIME   5
#define F_TIME_T   ur_time_t
#define F_TIME_FIRST   6
#define F_TIME_FIRST_T   ur_time_t
#define F_TIME_LAST   7
#define F_TIME_LAST_T   ur_time_t
#define F_DST_MAC   8
#define F_DST_MAC_T   mac_addr_t
#define F_SRC_MAC   9
#define F_SRC_MAC_T   mac_addr_t
#define F_DNS_RR_TTL   10
#define F_DNS_RR_TTL_T   uint32_t
#define F_NTP_DELAY   11
#define F_NTP_DELAY_T   uint32_t
#define F_NTP_DISPERSION   12
#define F_NTP_DISPERSION_T   uint32_t
#define F_ODID   13
#define F_ODID_T   uint32_t
#define F_PACKETS   14
#define F_PACKETS_T   uint32_t
#define F_SMTP_2XX_STAT_CODE_COUNT   15
#define F_SMTP_2XX_STAT_CODE_COUNT_T   uint32_t
#define F_SMTP_3XX_STAT_CODE_COUNT   16
#define F_SMTP_3XX_STAT_CODE_COUNT_T   uint32_t
#define F_SMTP_4XX_STAT_CODE_COUNT   17
#define F_SMTP_4XX_STAT_CODE_COUNT_T   uint32_t
#define F_SMTP_5XX_STAT_CODE_COUNT   18
#define F_SMTP_5XX_STAT_CODE_COUNT_T   uint32_t
#define F_SMTP_COMMAND_FLAGS   19
#define F_SMTP_COMMAND_FLAGS_T   uint32_t
#define F_SMTP_MAIL_CMD_COUNT   20
#define F_SMTP_MAIL_CMD_COUNT_T   uint32_t
#define F_SMTP_RCPT_CMD_COUNT   21
#define F_SMTP_RCPT_CMD_COUNT_T   uint32_t
#define F_SMTP_STAT_CODE_FLAGS   22
#define F_SMTP_STAT_CODE_FLAGS_T   uint32_t
#define F_ARP_HA_FORMAT   23
#define F_ARP_HA_FORMAT_T   uint16_t
#define F_ARP_OPCODE   24
#define F_ARP_OPCODE_T   uint16_t
#define F_ARP_PA_FORMAT   25
#define F_ARP_PA_FORMAT_T   uint16_t
#define F_DNS_ANSWERS   26
#define F_DNS_ANSWERS_T   uint16_t
#define F_DNS_ATYPE   27
#define F_DNS_ATYPE_T   uint16_t
#define F_DNS_CLASS   28
#define F_DNS_CLASS_T   uint16_t
#define F_DNS_ID   29
#define F_DNS_ID_T   uint16_t
#define F_DNS_PSIZE   30
#define F_DNS_PSIZE_T   uint16_t
#define F_DNS_QTYPE   31
#define F_DNS_QTYPE_T   uint16_t
#define F_DNS_RLENGTH   32
#define F_DNS_RLENGTH_T   uint16_t
#define F_DST_PORT   33
#define F_DST_PORT_T   uint16_t
#define F_ETHERTYPE   34
#define F_ETHERTYPE_T   uint16_t
#define F_HTTP_RESPONSE_STATUS_CODE   35
#define F_HTTP_RESPONSE_STATUS_CODE_T   uint16_t
#define F_SIP_MSG_TYPE   36
#define F_SIP_MSG_TYPE_T   uint16_t
#define F_SIP_STATUS_CODE   37
#define F_SIP_STATUS_CODE_T   uint16_t
#define F_SRC_PORT   38
#define F_SRC_PORT_T   uint16_t
#define F_DIR_BIT_FIELD   39
#define F_DIR_BIT_FIELD_T   uint8_t
#define F_DNS_DO   40
#define F_DNS_DO_T   uint8_t
#define F_DNS_RCODE   41
#define F_DNS_RCODE_T   uint8_t
#define F_NTP_LEAP   42
#define F_NTP_LEAP_T   uint8_t
#define F_NTP_MODE   43
#define F_NTP_MODE_T   uint8_t
#define F_NTP_POLL   44
#define F_NTP_POLL_T   uint8_t
#define F_NTP_PRECISION   45
#define F_NTP_PRECISION_T   uint8_t
#define F_NTP_STRATUM   46
#define F_NTP_STRATUM_T   uint8_t
#define F_NTP_VERSION   47
#define F_NTP_VERSION_T   uint8_t
#define F_PROTOCOL   48
#define F_PROTOCOL_T   uint8_t
#define F_TCP_FLAGS   49
#define F_TCP_FLAGS_T   uint8_t
#define F_TOS   50
#define F_TOS_T   uint8_t
#define F_TTL   51
#define F_TTL_T   uint8_t
#define F_ARP_DST_HA   52
#define F_ARP_DST_HA_T   char
#define F_ARP_DST_PA   53
#define F_ARP_DST_PA_T   char
#define F_ARP_SRC_HA   54
#define F_ARP_SRC_HA_T   char
#define F_ARP_SRC_PA   55
#define F_ARP_SRC_PA_T   char
#define F_DNS_NAME   56
#define F_DNS_NAME_T   char
#define F_DNS_RDATA   57
#define F_DNS_RDATA_T   char
#define F_HTTP_REQUEST_AGENT   58
#define F_HTTP_REQUEST_AGENT_T   char
#define F_HTTP_REQUEST_HOST   59
#define F_HTTP_REQUEST_HOST_T   char
#define F_HTTP_REQUEST_METHOD   60
#define F_HTTP_REQUEST_METHOD_T   char
#define F_HTTP_REQUEST_REFERER   61
#define F_HTTP_REQUEST_REFERER_T   char
#define F_HTTP_REQUEST_URL   62
#define F_HTTP_REQUEST_URL_T   char
#define F_HTTP_RESPONSE_CONTENT_TYPE   63
#define F_HTTP_RESPONSE_CONTENT_TYPE_T   char
#define F_HTTPS_SNI   64
#define F_HTTPS_SNI_T   char
#define F_NTP_ORIG   65
#define F_NTP_ORIG_T   char
#define F_NTP_RECV   66
#define F_NTP_RECV_T   char
#define F_NTP_REF   67
#define F_NTP_REF_T   char
#define F_NTP_REF_ID   68
#define F_NTP_REF_ID_T   char
#define F_NTP_SENT   69
#define F_NTP_SENT_T   char
#define F_SIP_CALLED_PARTY   70
#define F_SIP_CALLED_PARTY_T   char
#define F_SIP_CALL_ID   71
#define F_SIP_CALL_ID_T   char
#define F_SIP_CALLING_PARTY   72
#define F_SIP_CALLING_PARTY_T   char
#define F_SIP_CSEQ   73
#define F_SIP_CSEQ_T   char
#define F_SIP_REQUEST_URI   74
#define F_SIP_REQUEST_URI_T   char
#define F_SIP_USER_AGENT   75
#define F_SIP_USER_AGENT_T   char
#define F_SIP_VIA   76
#define F_SIP_VIA_T   char
#define F_SMTP_DOMAIN   77
#define F_SMTP_DOMAIN_T   char
#define F_SMTP_FIRST_RECIPIENT   78
#define F_SMTP_FIRST_RECIPIENT_T   char
#define F_SMTP_FIRST_SENDER   79
#define F_SMTP_FIRST_SENDER_T   char

extern uint16_t ur_last_id;
extern ur_static_field_specs_t UR_FIELD_SPECS_STATIC;
extern ur_field_specs_t ur_field_specs;

#endif
