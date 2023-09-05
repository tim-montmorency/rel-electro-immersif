// Cet exemple envoie des messages en lien avec le bouton
// par communication série. 
// À NOTER que le code pour contrôler le pixel
// est absent pour alléger le code.

// Inclure la librairie M5 (version pour M5Atom) :
// https://github.com/m5stack/M5Atom
#include <M5Atom.h>


void setup() {
  // Démarrer la libraire M5 avec toutes les options de pré-configuration désactivées :
  M5.begin(false, false, false);

  // Démarrer la connexion sérielle :
  Serial.begin(115200);

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
