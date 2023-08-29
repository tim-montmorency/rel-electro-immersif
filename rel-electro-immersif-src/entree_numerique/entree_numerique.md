# Entrée numérique

## Qu'est-ce qu'une entrée numérique

Une entrée numérique est une broche ou un module qui retourne uniquemenent deux valeurs possibles en fonction d'un état physique externe mesuré.

En fonction du signal reçu, le microcontrôleur pourra effectuer une tâche prévue (allumer la lumière lorsqu'un capteur de mouvement détecte une présence, par exemple). 

## Exemples d'entrées numériques

### Une broche en mode entrée

Si une broche est configurée en entrée (`INPUT`), nous pouvons effectuer la mesure numérique de la tension électrique. Cette mesure s’effectue sur une échelle à deux niveaux : 
* haute tension : `HIGH` présence d’une tension plus grande que 3.5V.
* basse tension : `LOW` présence d’une tension sous 1.5V.

### Un bouton simple

Si un bouton simple est relié à un circuit de résistance de rappel relié à une broche configurée en entrée(`INPUT_PULLUP`) nous pouvons effectuer la mesure numérique de la tension électrique qui change selon que le bouton est appuyé ou pas : 
* haute tension  (`HIGH`) le bouton est relaché.
* basse tension (`LOW`) le bouton est appuyé.
