SUBDIRS=. tests
bin_PROGRAMS=flow_meter ipfixprobe

LIBS=$(NONNEMEA_LIBS)
ipfixprobe_LIBS=-lpcap
ipfixprobe_LDADD=-lpcap
ipfixprobe_CXXFLAGS=-std=c++98 -Wno-write-strings
ipfixprobe_CPPFLAGS=-DDISABLE_UNIREC
flow_meter_src=flow_meter.cpp \
		flow_meter.h \
		packet.h \
		packetreceiver.h \
		pcapreader.h \
		flowexporter.h \
		flowifc.h \
		flowcache.h \
		pcapreader.cpp \
		nhtflowcache.cpp \
		nhtflowcache.h \
		stats.cpp \
		stats.h \
		flowcacheplugin.h \
		httpplugin.cpp \
		httpplugin.h \
		sipplugin.cpp \
		sipplugin.h \
		httpsplugin.cpp \
		httpsplugin.h \
		smtpplugin.cpp \
		smtpplugin.h \
		dnsplugin.cpp \
		dnsplugin.h \
		passivednsplugin.cpp \
		passivednsplugin.h \
		ntpplugin.cpp \
		ntpplugin.h \
		ipaddr.h \
		arpplugin.cpp \
		arpplugin.h \
		ipfixexporter.cpp \
		ipfix-elements.h \
		ipfixexporter.h \
		xxhash.c \
		xxhash.h \
		dns.h \
		conversion.h \
		conversion.cpp
ipfixprobe_SOURCES=$(flow_meter_src)

flow_meter_SOURCES=$(flow_meter_src) \
		    unirecexporter.h \
		    unirecexporter.cpp \
		    fields.c \
		    fields.h

flow_meter_LDADD=$(NEMEA_FRAMEWORK_LIBS) -ltrap -lunirec -lpcap
flow_meter_CXXFLAGS=-std=c++98 -Wno-write-strings

pkgdocdir=${docdir}/flow_meter
pkgdoc_DATA=README.md
EXTRA_DIST=README.md \
	traffic-samples/README.md \
	traffic-samples/arp-sample.pcap \
	traffic-samples/mixed-sample.pcap \
	traffic-samples/dns-sample.pcap \
	traffic-samples/http-sample.pcap \
	traffic-samples/https-sample.pcap \
	traffic-samples/ntp-sample.pcap \
	traffic-samples/sip-sample.pcap \
	traffic-samples/smtp-sample.pcap

bashcompl_DATA=flow_meter.bash
include ../aminclude.am
