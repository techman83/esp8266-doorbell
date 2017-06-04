ESP8266 Doorbell
----------------

This an example Doorbell which utilises an [Adafruit MAX98357 I2S Class-D Mono Amp](https://learn.adafruit.com/adafruit-max98357-i2s-class-d-mono-amp/overview).

The project is setup to use [Platform IO](http://docs.platformio.org/en/latest/quickstart.html). Requires a 'doorbell.wav' placed inside the data directory.

Uploading the SPIFFS data with PlatformIO
```
platformio run --target uploadfs
```

Uploading the firmware with PlatformIO
```
platformio run --target upload
```

Running the Serial monitor
```
platformio device monitor -b 115200
```
