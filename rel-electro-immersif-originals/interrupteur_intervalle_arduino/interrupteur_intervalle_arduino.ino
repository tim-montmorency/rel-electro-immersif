int brocheInterrupteur = 4;
unsigned long chronoInterrupteur = 0;

void setup() { // AU DÉMARRAGE
  Serial.begin(57600); // CONFIGURER LA COMMUNICATION SÉRIE
  pinMode( brocheInterrupteur , INPUT_PULLUP); // CONFIGURER LA BROCHE DE L'INTERRUPTEUR EN ENTRÉE
}

void loop() { // RÉPÉTER LE PLUS VITE POSSIBLE
  int nouvelleValeurInterrupteur = digitalRead( brocheInterrupteur ); // LECTURE DE TENSION
  
  if ( chronoInterrupteur - millis() >= 20 ) { // SI 20 MS SE SONT ECOULEES
      chronoInterrupteur = millis(); // REDEMARRER LE CHRONOMETRE
      Serial.print( nouvelleValeurInterrupteur ); // ENVOYER LA VALEUR
      Serial.println();  // TERMINER LE MESSAGE
  }
}
