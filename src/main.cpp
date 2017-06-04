/**
 * ESP8266 Doorbell
 * Doorbell that utilises an I2S based DAC/Amp
 * to play a WAV file. Put a doorbell.wav file 
 * smaller than 3MB into the data directory and
 * upload with `platformio run --target uploadfs`
 */

#include "ESP8266Wavplay.h"

void setup()
{
  Serial.begin(115200);
  Serial.println("Booting");
  // Set D3 as Switch pin
  pinMode(D3, INPUT_PULLUP);

  // Setup WavPlay
  wavSetup();
  showDir();
}

void loop() {
  int state = digitalRead(D3);

  if ( state == 0 && !wavPlaying()) {
    wavStartPlaying("/doorbell.wav");
  }

  // WavPlay is non blocking, we need to call it to make
  // sure it keeps playing until file end.
  wavLoop();
}
