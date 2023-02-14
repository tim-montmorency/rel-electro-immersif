# Débogage

## Ouvrir et configurer le moniteur série
![Ouvrir et configurer le moniteur série](./arduino_serie_ouvrir.svg)

## Fonctions pour déboguer avec Serial
![Fonctions pour déboguer avec Serial](./arduino_serie_fonctions.svg)

## Exemple d'envoi d'un message

![Envoi du message «Allo»](./arduino_serie_allo.svg)

## Le code ASCII utilisé pour le débogage

![Le code ASCII ](./arduino_serie_ascii.svg)

## Exemple : envoyer continuellement la valeur d'une entrée numérique

```arduino
int maBrocheEntreeNumerique = 4;

void setup() { // AU DÉMARRAGE
  Serial.begin(57600); // CONFIGURER LA COMMUNICATION SÉRIE
  pinMode( maBrocheEntreeNumerique , INPUT_PULLUP); // CONFIGURER LA BROCHE DE L'INTERRUPTEUR EN ENTRÉE
}

void loop() { // RÉPÉTER LE PLUS VITE POSSIBLE
  int maValeurInterrupteur = digitalRead( maBrocheEntreeNumerique ); // LECTURE DE TENSION

  Serial.print( maValeurInterrupteur ); // ENVOYER LA VALEUR
  Serial.println();  // TERMINER LE MESSAGE
}
```
