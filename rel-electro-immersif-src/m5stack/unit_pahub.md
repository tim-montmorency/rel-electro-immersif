# M5Stack UNIT PaHub

## Introduction

Attention, il existe deux versions du PaHub. Ces instructions concernent la version avec le TCA9548A.

Le [M5Stack PaHub TCA9548A](https://shop.m5stack.com/products/pahub-unit?variant=16804803412058) permet de relier jusqu'à 6 M5Stack UNIT I2C équipés d'un connecteur **rouge** au même microcontrôleur M5Stack.

Ce module permet de brancher plusieurs UNIT I2C qui possèdent la même adresse au même M5Stack.


## Bibliothèque TCA9548A

La bibliothèque [TCA9548A](https://github.com/WifWaf/TCA9548A) permet d'interfacer avec le [M5Stack PaHub TCA9548A](https://shop.m5stack.com/products/pahub-unit?variant=16804803412058).

###  Installation

La bibliothèque [TCA9548A](https://github.com/WifWaf/TCA9548A) est disponible dans le gestionnaire de bibliothèques d'Arduino.

### Code à ajouter à l'espace global (i.e. avant `setup()` )

```arduino
#include "TCA9548A.h"
TCA9548A myPbahub;
```

### Code à ajouter à `setup()`

Démarrer Wire s'il n'a pas encore été démarré:
```arduino
  Wire.begin();
```

Initialiser le PaHub :
```arduino

  myPbahub.begin(Wire);
  myPbahub.closeAll();
```


### Code à utiliser dans `loop()`

Ouvrir la connexion vers un des canaux et relier tout l'I2C vers celui-ci:
```arduino
myPbahub.openChannel(canal);
```

Fermer la connexion vers ce canal:
```arduino
myPbahub.closeChannel(canal);  
```

Utilisez ensuite l'I2C normalement. Les messages vont passer uniquement par les canaux ouverts. 

### Exemple 


```arduino
// Le code de base pour le M5Stack Atom
#include <M5Atom.h>
#include <FastLED.h>
CRGB mesPixels[1];

#include "Unit_Encoder.h"
Unit_Encoder myEncoder0;
Unit_Encoder myEncoder1;

// TCA9548A Jonathan Dempsey
// https://github.com/WifWaf/TCA9548A
#include "TCA9548A.h"
TCA9548A myPbahub;

unsigned long monChronoDepart = 0;  // DEPART DE MON CHRONOMÈTRE

#include <MicroOscSlip.h>
MicroOscSlip<64> myMicroOsc(&Serial);

void setup() {
  // Démarrer la libraire M5 avec toutes les options de pré-configuration désactivées :
  M5.begin(false, false, false);

  // Démarrer la connexion sérielle :
  Serial.begin(115200);

  // Ajouter le pixel (il y en a un seul) du M5Atom à la librairie FastLED :
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(mesPixels, 1);

  // Animation de démarrage
  while (millis() < 5000) {
    mesPixels[0] = CHSV((millis() / 5) % 255, 255, 255 - (millis() * 255 / 5000));
    FastLED.show();
    delay(50);
  }
  mesPixels[0] = CRGB(0, 0, 0);
  FastLED.show();

  // Démarrer la connexion I2C
  // si elle n'a pas été démarrée
  Wire.begin();

  myPbahub.begin(Wire);
  myPbahub.closeAll();

  myEncoder0.begin();
  myEncoder1.begin();
}

// FUNCTION THAT WILL BE CALLED WHEN AN OSC MESSAGE IS RECEIVED:
void myOscMessageParser( MicroOscMessage& receivedOscMessage) {
   // ADD MESSAGE PARSING CODE HERE
}

void loop() {
  // Toujours inclure M5.update() au début de loop() :
  M5.update();

  myMicroOsc.onOscMessageReceived( myOscMessageParser );

  if (millis() - monChronoDepart >= 50) {  
    monChronoDepart = millis();  

    myPbahub.openChannel(0);
    int myEncoderValue0 = myEncoder0.getEncoderValue();
    myMicroOsc.sendInt("/enc0", myEncoderValue0);
    myPbahub.closeChannel(0);     

    myPbahub.openChannel(1);
    int myEncoderValue1 = myEncoder1.getEncoderValue();
    myMicroOsc.sendInt("/enc1", myEncoderValue1);
    myPbahub.closeChannel(1);   

  }
}

```
