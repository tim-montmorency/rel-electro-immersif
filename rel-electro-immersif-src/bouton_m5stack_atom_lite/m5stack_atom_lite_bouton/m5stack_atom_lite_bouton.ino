// Le code de base pour le M5Stack Atom

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

  if (M5.Btn.wasReleased()) {
    Serial.println("Le bouton A ÉTÉ relâché!");
  }

  if (M5.Btn.wasPressed()) {
    Serial.println("Le bouton A ÉTÉ appuyé!");
  }

  if (M5.Btn.isReleased()) {
    Serial.println("Présentement, le bouton EST relâché!");
  }

  if (M5.Btn.isPressed()) {
    Serial.println("Présentement, le bouton EST appuyé!");
  }
}
