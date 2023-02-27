int maBroche = 13;
int maValeur = LOW ; // VALEUR DÉSIRÉE DE LA SORTIE NUMÉRIQUE

unsigned long monChronoDepart = 0; // DEPART DE MON CHRONOMÈTRE

void setup() { // AU DÉMARRAGE
  Serial.begin(115200); // CONFIGURER LA COMMUNICATION SÉRIE
  pinMode( maBroche , OUTPUT); // CONFIGURER LA BROCHE EN SORTIE
}

void loop() { // RÉPÉTER LE PLUS VITE POSSIBLE

  unsigned long monChronoEcoule = millis() - monChronoDepart; // TEMPS ÉCOULÉ DE MON CHRONOMÈTRE
  unsigned long monChronoIntervalle = 250; // INTERVALLE DE TEMPS EN MILLISECONDES

  if ( monChronoEcoule >= monChronoIntervalle ) { // SI 250 MS SE SONT ECOULEES...
     monChronoDepart = millis(); // ...REDÉMARRER LE CHRONOMÈTRE...

    // ALTERNER LA VALEUR DÉSIRÉE DE LA SORTIE NUMÉRIQUE 
    if ( maValeur == LOW ) maValeur = HIGH; // SI LOW, METTRE À HIGH
    else maValeur = LOW; // SINON, METTRE À LOW

    // APLLIQUER LA VALEUR DÉSIRÉE À LA SORTIE NUMÉRIQUE
    digitalWrite( maBroche , maValeur );
    
    Serial.print( "Envoi sur la broche  " ); // ENVOYER UNE EN-TÊTE DE MESSAGE
    Serial.print( maBroche ); // ENVOYER LE NUMÉRO DE LA BROCHE
    Serial.print( " de la valeur (0=LOW, 1=HIGH) : " ); // ENVOYER UN SÉPARATEUR ENTRE LE NUMÉRO DE LA BROCHE ET SA VALEUR
    Serial.print( maValeur ); // ENVOYER LA VALEUR
    Serial.println();  // TERMINER LE MESSAGE


  }
}
