cmd_vmlinux.a := rm -f vmlinux.a; aarch64-linux-gnu-ar cDPrST vmlinux.a ./built-in.a  arch/arm64/lib/lib.a  lib/lib.a; aarch64-linux-gnu-ar mPiT $$(aarch64-linux-gnu-ar t vmlinux.a | sed -n 1p) vmlinux.a $$(aarch64-linux-gnu-ar t vmlinux.a | grep -F -f ./scripts/head-object-list.txt)