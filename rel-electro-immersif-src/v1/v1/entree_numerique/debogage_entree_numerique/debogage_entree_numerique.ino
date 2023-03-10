int maBrocheEntreeNumerique = 2;
int maValeurPrecedente; // VALEUR PRÉCÉDENTE DE L'ENTRÉE NUMERIQUE

unsigned long monChronoDepart = 0; // DEPART DE MON CHRONOMÈTRE

void setup() { // AU DÉMARRAGE
  Serial.begin(115200); // CONFIGURER LA COMMUNICATION SÉRIE
  pinMode( maBrocheEntreeNumerique , INPUT_PULLUP); // CONFIGURER LA BROCHE DE L'ENTRÉE NUMERIQUE EN ENTRÉE
}

void loop() { // RÉPÉTER LE PLUS VITE POSSIBLE

  unsigned long monChronoEcoule = millis() - monChronoDepart; // TEMPS ÉCOULÉ DE MON CHRONOMÈTRE
  unsigned long monChronoIntervalle = 20; // INTERVALLE DE TEMPS EN MILLISECONDES

  if ( monChronoEcoule >= monChronoIntervalle ) { // SI 20 MS SE SONT ECOULEES...
     monChronoDepart = millis(); // ...REDÉMARRER LE CHRONOMÈTRE...
     
    int maNouvelleValeur = digitalRead( maBrocheEntreeNumerique ); // LECTURE DE TENSION
    
    if ( maNouvelleValeur != maValeurPrecedente ) { // SI LA NOUVELLE VALEUR EST DIFFERENTE DE LA PRÉCÉDENTE
      Serial.print( "Valeur numerique de la broche " ); // ENVOYER UNE EN-TÊTE DE MESSAGE
      Serial.print( maBrocheEntreeNumerique ); // ENVOYER LE NUMÉRO DE LA BROCHE
      Serial.print( " : " ); // ENVOYER UN SÉPARATEUR ENTRE LE NUMÉRO DE LA BROCHE ET SA VALEUR
      Serial.print( maNouvelleValeur ); // ENVOYER LA VALEUR
      Serial.println();  // TERMINER LE MESSAGE
    }
    
    maValeurPrecedente = maNouvelleValeur; // METTRE EN MÉMOIRE LA NOUVELLE VALEUR

  }
}
