# Mesurer le temps avec *millis()*

## Description de la fonction *millis()*

La fonction `millis()` retourne le temps en millisecondes depuis le démarrage de la carte Arduino. 

Le temps étant compté en millisecondes, la valeur du temps va augmenter très rapidement et son type doit être assez grand pour pouvoir la stocker sans erreur. Le type `unsigned long` est ainsi utilisé pour stocker le temps. Lorsqu'un type de données est indiqué «non signé», il ne peut être que positif. En éliminant les valeurs négatives, cela permet de compter avec deux fois plus de valeurs postives. Un `unsigned long` peut compter jusqu'à `4 294 967 295`. C’est assez d’espace pour stocker le temps pour 49 jours. Après 49 jours, le temps recommence à compter à partir de 0.

### À ajouter dans l'espace global (au début du code)

Déclarer une variable pour récupérer le temps:
```arduino
unsigned long monTempsEcoule;
```

### Configuration dans *setup()*

Il n'y a rien à configurer dans *setup()*.

### Utilisation dans *loop()*

Mettre le temps dans la variable `monTempsEcoule`:
```arduino
monTempsEcoule = millis();
```
