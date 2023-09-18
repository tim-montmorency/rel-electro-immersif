// MicroOSC demo for M5Stack Atom Lite
// by Thomas O Fredericks
// 2023-02-20

// WHAT IS DOES
// ======================
// OSC communication example.
//
// OSC messages received by the Arduino :
// - /led int -> turn off (0) or on (1) the pixel
// - /pixel int int int -> set the pixel color
//
// OSC messages sent by the Arduino :
// - /pot int -> sends the value of the angle unit
// - /button int -> sends the value of the button

// HARDWARE REQUIREMENTS
// ==================
// - M5Stack Atom Lite
// - M5Stack Angle Unit connected to Atom Lite

// REQUIRED LIBRARIES
// ==================
// - MicroOsc
// - M5Atom

// REQUIRED CONFIGURATION
// ======================
// - Set the baud of your computer's serial connection to 115200

#include <M5Atom.h>
#include <FastLED.h>

CRGB mesPixels[1];

#include <MicroOscSlip.h>

// THE NUMBER 64 BETWEEN THE < > SYMBOLS  BELOW IS THE MAXIMUM NUMBER OF BYTES RESERVED FOR INCOMMING MESSAGES.
// MAKE SURE THIS NUMBER OF BYTES CAN HOLD THE SIZE OF THE MESSAGE YOUR ARE RECEIVING IN ARDUINO.
// OUTGOING MESSAGES ARE WRITTEN DIRECTLY TO THE OUTPUT AND DO NOT NEED ANY RESERVED BYTES.
MicroOscSlip<64> myMicroOsc(&Serial);  // CREATE AN INSTANCE OF MicroOsc FOR SLIP MESSAGES

unsigned long myChronoStart = 0;  // VARIABLE USED TO LIMIT THE SPEED OF THE loop() FUNCTION.

// ANGLE UNIT
#define MA_BROCHE_CAPTEUR_ROT 32
int maLectureRotation;


/********
  SETUP
*********/
void setup() {
  M5.begin(false, false, false);
  Serial.begin(115200);
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(mesPixels, 1);
}

/****************
  ON OSC MESSAGE
*****************/
void myOnOscMessageReceived(MicroOscMessage& oscMessage) {

  if (oscMessage.checkOscAddress("/led")) {

    int state = oscMessage.nextAsInt();
    if (state == 0) {
      mesPixels[0] = CRGB(0, 0, 0);
    } else {
      mesPixels[0] = CRGB(255, 255, 255);
    }
    FastLED.show();

  } else if (oscMessage.checkOscAddress("/pixel")) {

    int red = oscMessage.nextAsInt();
    int green = oscMessage.nextAsInt();
    int blue = oscMessage.nextAsInt();
    mesPixels[0] = CRGB(red, green, blue);
    FastLED.show();
  }
}

/*******
  LOOP
********/
void loop() {

  myMicroOsc.onOscMessageReceived(myOnOscMessageReceived);  // TRIGGER OSC RECEPTION

  if (millis() - myChronoStart >= 50) {  // IF 50 MS HAVE ELLAPSED
    myChronoStart = millis();            // RESTART CHRONO

    if ( M5.Btn.isPressed() ) {
      myMicroOsc.sendInt("/button", 1);
    } else {
      myMicroOsc.sendInt("/button", 0);
    }

    maLectureRotation = analogRead(MA_BROCHE_CAPTEUR_ROT);
    myMicroOsc.sendInt("/pot", maLectureRotation);


  }
}
