cmd_drivers/crypto/hisilicon/zip/hisi_zip.mod := printf '%s\n'   zip_main.o zip_crypto.o | awk '!x[$$0]++ { print("drivers/crypto/hisilicon/zip/"$$0) }' > drivers/crypto/hisilicon/zip/hisi_zip.mod
