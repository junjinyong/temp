cmd_drivers/media/common/videobuf2/videobuf2-memops.mod := printf '%s\n'   videobuf2-memops.o | awk '!x[$$0]++ { print("drivers/media/common/videobuf2/"$$0) }' > drivers/media/common/videobuf2/videobuf2-memops.mod