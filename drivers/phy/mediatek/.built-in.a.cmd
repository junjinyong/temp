cmd_drivers/phy/mediatek/built-in.a := rm -f drivers/phy/mediatek/built-in.a;  printf "drivers/phy/mediatek/%s " phy-mtk-tphy.o | xargs aarch64-linux-gnu-ar cDPrST drivers/phy/mediatek/built-in.a
