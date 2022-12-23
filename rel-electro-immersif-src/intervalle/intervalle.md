# Intervalle de temps

## Comment chronométer un intervalle de temps avec millis()

Créer une variable **globale** pour mettre en mémoire le temps de départ du chronomètre :
```arduino
unsigned long monChronoDepart = 0; // DEPART DE MON CHRONOMÈTRE
```

Pour calculer le temps écoulé nous utilisons le code suivant:
```arduino
unsigned long monChronoEcoule = millis() - monChronoDepart; // TEMPS ÉCOULÉ DE MON CHRONOMÈTRE
```

Nous pouvons exécuter du code si le temps écoulé dépasse un intervalle de temps (20 millisecondes dans cet exemple):
```arduino
unsigned long monChronoIntervalle = 20; // INTERVALLE DE TEMPS EN MILLISECONDES
if ( monChronoEcoule >= monChronoIntervalle ) { // SI LE TEMPS ÉCOULÉ DÉPASSE L'INTERVALLE...
	// ...FAIRE QQCH 
}
```

Nous pouvons redémarrer le chronomètres avec le code suivant:
```arduino
monChronoDepart = millis(); // REDÉMARRER LE CHRONOMÈTRE
```

## Comment exécuter de façon cyclique

Nous pouvons combiner le deux extraits de code précédents pour exécuter du code ET redémarrer le chronomètre de façon cyclique. Dans l'extrait suivant, le code entre les `{ }` est exécuté à chaque 20 millisecondes:
```arduino
unsigned long monChronoDepart = 0; // DEPART DE MON CHRONOMÈTRE

void setup() { 
};

void loop() {

    unsigned long monChronoEcoule = millis() - monChronoDepart; // TEMPS ÉCOULÉ DE MON CHRONOMÈTRE

    unsigned long monChronoIntervalle = 20; // INTERVALLE DE TEMPS EN MILLISECONDES

    if ( monChronoEcoule >= monChronoIntervalle ) { // SI LE TEMPS ÉCOULÉ DÉPASSE L'INTERVALLE...
    	monChronoDepart = millis(); // ...REDÉMARRER LE CHRONOMÈTRE...
    	// CETTE SECTION SERA EXÉCUTÉE À CHAQUE 20 MS
    }
}
```

## Comment exécuter de façon cyclique (code abrégé)

```arduino
unsigned long monChronoDepart = 0; // DEPART DE MON CHRONOMÈTRE

void setup() { 
};

void loop() {

    if ( millis() - monChronoDepart >= 20 ) { // SI LE TEMPS ÉCOULÉ DÉPASSE L'INTERVALLE...
      monChronoDepart = millis(); // ...REDÉMARRER LE CHRONOMÈTRE...
      // CETTE SECTION SERA EXÉCUTÉE À CHAQUE 20 MS
    }
}
```


## Exemple : envoyer la valeur d'une entrée numérique à chaque 20 millisecondes
```arduino
int maBrocheEntreeNumerique = 4;
unsigned long monChronoDepart = 0;

void setup() { // AU DÉMARRAGE
  Serial.begin(57600); // CONFIGURER LA COMMUNICATION SÉRIE
  pinMode( maBrocheEntreeNumerique , INPUT_PULLUP); // CONFIGURER LA BROCHE DE L'INTERRUPTEUR EN ENTRÉE
}

void loop() { // RÉPÉTER LE PLUS VITE POSSIBLE
  

  unsigned long monChronoEcoule = millis() - monChronoDepart; // TEMPS ÉCOULÉ DE MON CHRONOMÈTRE
  unsigned long monChronoIntervalle = 20; // INTERVALLE DE TEMPS EN MILLISECONDES
  if ( monChronoEcoule >= monChronoIntervalle ) { // SI LE TEMPS ÉCOULÉ DÉPASSE L'INTERVALLE...
    monChronoDepart = millis(); // ...REDÉMARRER LE CHRONOMÈTRE...
    
    int maValeurInterrupteur = digitalRead( maBrocheEntreeNumerique ); // LECTURE DE TENSION

    Serial.print( maValeurInterrupteur ); // ENVOYER LA VALEUR
    Serial.println();  // TERMINER LE MESSAGE
  }
}
```