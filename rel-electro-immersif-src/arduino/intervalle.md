# Intervalle de temps


## Comment meurer un intervalle de temps


### À ajouter dans l'espace global (au début du code)

Créer une variable **globale** pour mettre en mémoire le temps de départ du chronomètre:
```arduino
unsigned long monChronoDepart = 0; // DEPART DE MON CHRONOMÈTRE
```
### Configuration dans *setup()*

Il n'y a rien à configurer dans *setup()*.

### Utilisation dans *loop()*
Pour calculer le temps écoulé on utilise le code suivant: 
```arduino
unsigned long monChronoEcoule = millis() - monChronoDepart; // TEMPS ÉCOULÉ DE MON CHRONOMÈTRE
```

On peut redémarrer la mesure du temps avec le code suivant:
```arduino
monChronoDepart = millis(); // REDÉMARRER LE CHRONOMÈTRE
```

## Comment répéter une action selon un intervalle

### À ajouter dans l'espace global (au début du code)
```arduino
unsigned long monChronoDepart = 0; // DEPART DE MON CHRONOMÈTRE
```

### Configuration dans *setup()*
Il n'y a rien à configurer dans *setup()*.

### Utilisation dans *loop()*
Dans cet extrait de code, le bloc de la condition `if` est exécuté à chaque 50 millisecondes: 

```arduino
if ( millis() - monChronoDepart >= 50 ) { // SI LE TEMPS ÉCOULÉ DÉPASSE 50 MS...
      monChronoDepart = millis(); // ...REDÉMARRER LE CHRONOMÈTRE...
      // CETTE SECTION SERA EXÉCUTÉE À CHAQUE 50 MS
      // AJOUTER LE CODE À RÉPETTER ICI
}
```

