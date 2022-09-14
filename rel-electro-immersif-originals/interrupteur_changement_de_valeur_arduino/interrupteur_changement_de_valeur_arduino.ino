int brocheInterrupteur = 4;
int valeurPrecedenteInterrupteur;

void setup() { // AU DÉMARRAGE
  Serial.begin(57600); // CONFIGURER LA COMMUNICATION SÉRIE
  pinMode( brocheInterrupteur , INPUT_PULLUP); // CONFIGURER LA BROCHE DE L'INTERRUPTEUR EN ENTRÉE
}

void loop() { // RÉPÉTER LE PLUS VITE POSSIBLE
  int nouvelleValeurInterrupteur = digitalRead( brocheInterrupteur ); // LECTURE DE TENSION
  
  if ( valeurPrecedenteInterrupteur != nouvelleValeurInterrupteur ) { // SI LA NOUVELLE VALEUR EST DIFFERENTE DE LA PRÉCÉDENTE     
      Serial.print( nouvelleValeurInterrupteur ); // ENVOYER LA VALEUR
      Serial.println();  // TERMINER LE MESSAGE
      valeurPrecedenteInterrupteur = nouvelleValeurInterrupteur; // METTRE EN MÉMOIRE LA NOUVELLE VALEUR
  }
}
