cmd_drivers/mtd/nand/raw/brcmnand/brcmstb_nand.mod := printf '%s\n'   brcmstb_nand.o | awk '!x[$$0]++ { print("drivers/mtd/nand/raw/brcmnand/"$$0) }' > drivers/mtd/nand/raw/brcmnand/brcmstb_nand.mod
