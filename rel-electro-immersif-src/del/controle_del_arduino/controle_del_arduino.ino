
int maDelBroche = 13;  // BROCHE CONNECTÉE À LA DEL

int maDelValeur = LOW;  // VALEUR INITIALE DE LA DEL

unsigned long monChronoDepart = 0;  // VARIABLE POUR CHRONOMÈTRER LE CLIGNOTEMENT

void setup() {
  pinMode(maDelBroche, OUTPUT);  // SORTIE NUMERIQUE
  digitalWrite(maDelBroche, maDelValeur); // APPLIQUER LA VALEUR A LA DEL
}

void loop() {
  
  if (millis() - monChronoDepart >= 100) { // SI LE CHRONOMÈTRE DÉPASSE 100 MS
    monChronoDepart = millis(); // REDÉMARRER LE CHRONOMÈTRE

    maDelValeur = !(maDelValeur); // INVERSER LA VALEUR AVEC LE SYMBOL !
    digitalWrite(maDelBroche, maDelValeur); // APPLIQUER LA VALEUR A LA DEL

  }
}