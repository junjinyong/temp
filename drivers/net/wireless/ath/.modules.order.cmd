cmd_drivers/net/wireless/ath/modules.order := {   cat drivers/net/wireless/ath/ath9k/modules.order;   cat drivers/net/wireless/ath/carl9170/modules.order;   cat drivers/net/wireless/ath/ath6kl/modules.order;   cat drivers/net/wireless/ath/ar5523/modules.order;   echo drivers/net/wireless/ath/ath.ko; :; } > drivers/net/wireless/ath/modules.order