cmd_net/ipv6/modules.order := {   cat net/ipv6/netfilter/modules.order;   echo net/ipv6/ipv6.ko;   echo net/ipv6/sit.ko; :; } > net/ipv6/modules.order
