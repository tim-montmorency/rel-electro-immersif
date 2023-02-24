# Entrée numérique

Jusqu'à maintenant, nous avons traité des sorties (`OUTPUT`). Grâce à la commande `digitalWrite()` on peut contrôler la tension électrique d'une broche : 
* haute tension : `HIGH`.
* basse tension : `LOW`.

On a utilisé jusqu’ici cette différence de potentiel pour allumer des DEL. 

Si une broche est configurée en entrée (`INPUT`), nous pouvons effectuer la mesure numérique de la tension électrique. Cette mes
s’effectue sur une échelle à deux niveaux : 
* haute tension : `HIGH` présence d’une tension plus grande que 3.5V.
* basse tension : `LOW` présence d’une tension sous 1.5V.

En fonction du signal reçu, le microcontrôleur pourra effectuer une tâche prévue (allumer la lumière lorsqu'un capteur de mouvement détecte une présence, par exemple). 

Pour effectuer la mesure numérique de la tension électrique présente à une broche, nous utilisons la paire de fonctions suivantes :
1) Configurer la broche `numeroBoche` en mode entrée avec `INPUT_PULLUP` :
```cpp
pinMode( numeroBoche , INPUT_PULLUP );
```
2) Effectuer la mesure de la tension à la broche `numeroBoche` et sauvegarder la valeur dans une variable :
```cpp
int mesureDeTension;
mesureDeTension = digitalRead( numeroBoche );
```
## Debogage d'une entrée numérique

Dans le code suivant, nous déboguons l'entrée numérique 2 : 
```arduino
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
```

![Résultat du débogage analogique dans le moniteur série](./debogage_entree_numerique_moniteur_serie.png)

## Allumer ou éteindre une DEL à partir d'un interrupteur
```arduino
int brocheDel = 3;
int brocheInterrupteur = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode( brocheDel , OUTPUT);
  pinMode( brocheInterrupteur , INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int mesureDeTension = digitalRead( brocheInterrupteur); 
  if ( mesureDeTension == LOW ) {
    digitalWrite( brocheDel, HIGH);
  } else {
    digitalWrite( brocheDel, LOW);
  }
}
```

## Contrôler le clignotement d'une DEL à partir d'un interrupteur
```arduino
int brocheDel = 3;
int brocheInterrupteur = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode( brocheDel , OUTPUT);
  pinMode( brocheInterrupteur , INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int mesureDeTension = digitalRead( brocheInterrupteur); 
  if ( mesureDeTension == LOW ) {
    digitalWrite( brocheDel, HIGH);
    delay(250);
    digitalWrite( brocheDel, LOW);
    delay(250);
  } else {
    digitalWrite( brocheDel, LOW);
  }
}
```
