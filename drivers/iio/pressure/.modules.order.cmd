cmd_drivers/iio/pressure/modules.order := {   echo drivers/iio/pressure/bmp280.ko;   echo drivers/iio/pressure/bmp280-i2c.ko;   echo drivers/iio/pressure/bmp280-spi.ko;   echo drivers/iio/pressure/ms5637.ko; :; } > drivers/iio/pressure/modules.order