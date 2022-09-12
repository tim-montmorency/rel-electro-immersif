# Sortie numérique

Il est possible de régler la tension présente à la plupart des broches de la carte Arduino. 

Cette tension peut être réglée à deux niveaux :
* `HIGH` : règle la tension de sortie à 5V (pôle positif)
* `LOW` : règle la tension de sortie à 0V (pôle négatif/GND)

Pour régler la tension électrique de sortie d'une broche, nous utilisons la paire de fonctions suivantes :
1) Configurer la broche `numeroBoche` en mode sortie avec `OUTPUT` :
```cpp
pinMode( numeroBoche , OUTPUT );
```

2) Régler la tension avec l’une des commandes suivantes :
Pour règler la tension de sortie à 5V (pôle positif)
```cpp
digitalWrite( numeroBoche, HIGH );
```

Pour règler la tension de sortie à 0V (pôle négatif/GND)
```cpp
digitalWrite( numeroBoche, LOW );
```