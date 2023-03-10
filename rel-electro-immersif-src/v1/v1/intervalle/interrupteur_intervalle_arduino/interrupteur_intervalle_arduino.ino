int maBrocheEntreeNumerique = 4;
unsigned long monChronoDepart = 0;

void setup() { // AU DÉMARRAGE
  Serial.begin(57600); // CONFIGURER LA COMMUNICATION SÉRIE
  pinMode( maBrocheEntreeNumerique , INPUT_PULLUP); // CONFIGURER LA BROCHE DE L'INTERRUPTEUR EN ENTRÉE
}

void loop() { // RÉPÉTER LE PLUS VITE POSSIBLE
  int maValeurInterrupteur = digitalRead( maBrocheEntreeNumerique ); // LECTURE DE TENSION

  unsigned long monChronoEcoule = millis() - monChronoDepart; // TEMPS ÉCOULÉ DE MON CHRONOMÈTRE
  unsigned long monChronoIntervalle = 20; // INTERVALLE DE TEMPS EN MILLISECONDES
  if ( monChronoEcoule >= monChronoIntervalle ) { // SI LE TEMPS ÉCOULÉ DÉPASSE L'INTERVALLE...
    monChronoDepart = millis(); // ...REDÉMARRER LE CHRONOMÈTRE...
    Serial.print( maValeurInterrupteur ); // ENVOYER LA VALEUR
    Serial.println();  // TERMINER LE MESSAGE
  }
}
