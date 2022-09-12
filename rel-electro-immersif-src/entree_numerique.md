# Entrée numérique

Jusqu'à maintenant, nous avons traité des sorties (`OUTPUT`). Grâce à la commande `digitalWrite()` on peut contrôler la tension électrique d'un broche :
* haute tension : `HIGH`
* basse tension : `LOW` 

Nous avons utilisé jusqu’ici cette différence de potentiel pour allumer des DEL.

Si une broche est configurée en entrée (`INPUT`), nous pouvons effectuer la mesure numérique de la tension électrique. Cette mes
s’effectue sure une échelle à deux niveaux :
* haute tension : `HIGH` présence d’une tension plus grande que 3.5V
* basse tension : `LOW` présence d’une tension sous 1.5 V

En fonction du signal reçu, le microcontrôleur pourra effectuer une tâche prévue (allumer la lumière lorsqu'un capteur de mouvement détecte une présence, par exemple). 

Pour mesurer la tension électrique présente à une broche, nous utilisons la paire de fonctions suivantes :
1) Configurer la broche `numeroBoche` en mode entrée avec `INPUT_PULLUP` :
```cpp
pinMode( numeroBoche , INPUT_PULLUP );
```
2) Effectuer la mesure de la tension à la broche `numeroBoche` et sauvegarder la valeur dans une variable :
```cpp
int mesureDeTension;
mesureDeTension = digitalRead( numeroBoche );
```