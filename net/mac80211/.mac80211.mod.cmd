cmd_net/mac80211/mac80211.mod := printf '%s\n'   main.o status.o driver-ops.o sta_info.o wep.o aead_api.o wpa.o scan.o offchannel.o ht.o agg-tx.o agg-rx.o vht.o he.o s1g.o ibss.o iface.o link.o rate.o michael.o tkip.o aes_cmac.o aes_gmac.o fils_aead.o cfg.o ethtool.o rx.o spectmgmt.o tx.o key.o util.o wme.o chan.o trace.o mlme.o tdls.o ocb.o airtime.o eht.o led.o pm.o rc80211_minstrel_ht.o | awk '!x[$$0]++ { print("net/mac80211/"$$0) }' > net/mac80211/mac80211.mod