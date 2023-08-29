// Exemple qui assigne une couleur aléatoire entre le rouge et le jaune
// au pixel pour simuler la lumière d'une chandelle.
// Par Thomas O Fredericks

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

// Une variable pour mémoriser l'état actuel du pixel
int monEtatPixel = 0;

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

  // Changer la couleur pour un rouge-orangé :
  mesPixels[0].red = random(50, 256);
  mesPixels[0].green = random(0, 60);
  mesPixels[0].blue = 0;

  // Mettre à jour le pixel :
  FastLED.show();

}
