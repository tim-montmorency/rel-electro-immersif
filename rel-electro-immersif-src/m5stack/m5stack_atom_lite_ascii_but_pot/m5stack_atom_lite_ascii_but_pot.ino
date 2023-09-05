#define MA_BROCHE_CAPTEUR_ROT 32
int maLectureRotation;

int maLectureBouton;

// Inclure la librairie M5 (version pour M5Atom) :
// https://github.com/m5stack/M5Atom
#include <M5Atom.h>

// Inclure la librairie FastLED qui va gérer le pixel :
// https://github.com/FastLED/FastLED
#include <FastLED.h>

// Un tableau qui contient une variable de type CRGB.
// Il y a un seul pixel, mais il doit être dans un tableau.
// CRGB est un type de couleur défini par la lirairie FastLed :
// https://github.com/FastLED/FastLED/wiki/Pixel-reference#crgb-reference
CRGB mesPixels[1];


void setup() {
  // Démarrer la libraire M5 avec toutes les options de pré-configuration désactivées :
  M5.begin(false, false, false);

  // Démarrer la connexion sérielle :
  Serial.begin(115200);

  // Ajouter le pixel (il y en a un seul) du M5Atom à la librairie FastLED :
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(mesPixels, 1);
}

void loop() {
  // Toujours inclure M5.update() au début de loop() :
  M5.update();

    // put your main code here, to run repeatedly:
  maLectureRotation = analogRead(MA_BROCHE_CAPTEUR_ROT);
  Serial.print("/pot");
  Serial.print(" ");
  Serial.println(maLectureRotation);

  maLectureBouton = M5.Btn.isPressed();
  Serial.print("/button");
  Serial.print(" ");
  Serial.println(maLectureBouton);
}

