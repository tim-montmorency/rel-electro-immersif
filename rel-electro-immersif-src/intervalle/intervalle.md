# Intervalle de temps

## Comment chronométer un intervalle de temps avec millis()

Créer une variable **globale** pour mettre en mémoire le temps de départ du chronomètre :
```arduino
unsigned long monChronoDepart = 0; // DEPART DE MON CHRONOMÈTRE
```

Pour calculer le temps écoulé on utilison le code suivant: 
```arduino
unsigned long monChronoEcoule = millis() - monChronoDepart; // TEMPS ÉCOULÉ DE MON CHRONOMÈTRE
```

On execute un bloc de code seulement si le temps écoulé dépasse un intervalle de temps (20 millisecondes dans cet exemple): 
```arduino
unsigned long monChronoIntervalle = 20; // INTERVALLE DE TEMPS EN MILLISECONDES
if ( monChronoEcoule >= monChronoIntervalle ) { // SI LE TEMPS ÉCOULÉ DÉPASSE L'INTERVALLE...
	// ...FAIRE QQCH 
}
```

On peut redémarrer l'intervalle du  chronomètre avec le code suivant:
```arduino
monChronoDepart = millis(); // REDÉMARRER LE CHRONOMÈTRE
```

## Comment exécuter de façon cyclique

Nous pouvons combiner les deux extraits de code précédents pour exécuter du code ET redémarrer le chronomètre de façon cyclique. Dans l'extrait suivant, le code entre les `{ }` est exécuté à chaque 20 millisecondes:
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

