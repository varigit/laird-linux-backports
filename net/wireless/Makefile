obj-$(CPTCFG_CFG80211) += cfg80211.o
obj-$(CPTCFG_LIB80211) += lib80211.o
obj-$(CPTCFG_LIB80211_CRYPT_WEP) += lib80211_crypt_wep.o
obj-$(CPTCFG_LIB80211_CRYPT_CCMP) += lib80211_crypt_ccmp.o
obj-$(CPTCFG_LIB80211_CRYPT_TKIP) += lib80211_crypt_tkip.o

obj-$(CONFIG_WEXT_CORE) += wext-core.o
obj-$(CONFIG_WEXT_PROC) += wext-proc.o
obj-$(CONFIG_WEXT_SPY) += wext-spy.o
obj-$(CONFIG_WEXT_PRIV) += wext-priv.o

cfg80211-y += core.o sysfs.o radiotap.o util.o reg.o scan.o nl80211.o
cfg80211-y += mlme.o ibss.o sme.o chan.o ethtool.o mesh.o ap.o trace.o ocb.o
cfg80211-$(CPTCFG_CFG80211_DEBUGFS) += debugfs.o
cfg80211-$(CPTCFG_CFG80211_WEXT) += wext-compat.o wext-sme.o
cfg80211-$(CPTCFG_CFG80211_INTERNAL_REGDB) += regdb.o

CFLAGS_trace.o := -I$(src)

ccflags-y += -D__CHECK_ENDIAN__

space_escape := %%%SPACE%%%

ifneq ($(CPTCFG_CFG80211_INTERNAL_REGDB_FILE),"")
CFG80211_INTERNAL_REGDB_FILE_FILENAME := $(subst \\,\,$(subst \$$(quote),$$(quote),$(subst $$(space_escape),\$$(space),$(patsubst "%",%,$(subst $$(space),$$(space_escape),$(CPTCFG_CFG80211_INTERNAL_REGDB_FILE))))))
endif

$(obj)/regdb.c: $(src)/$(CFG80211_INTERNAL_REGDB_FILE_FILENAME) $(src)/genregdb.awk
	@$(AWK) -f $(src)/genregdb.awk < $< > $@

clean-files := regdb.c
