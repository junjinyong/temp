cmd_drivers/pci/controller/pcie-rockchip-host.mod := printf '%s\n'   pcie-rockchip-host.o | awk '!x[$$0]++ { print("drivers/pci/controller/"$$0) }' > drivers/pci/controller/pcie-rockchip-host.mod
