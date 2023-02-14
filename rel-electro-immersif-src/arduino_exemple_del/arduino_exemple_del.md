# Contrôler une DEL

![Fiche synthèse pour allumer une DEL](./arduino_allumer_del_resume.svg)


## Segment de circuit

![Segment de circuit pour contrôler une DEL](./Slide1.SVG)


## Circuit complet
### Shéma du circuit

![Schéma du circuit de l'exemple pour contrôler une DEL](./del_arduino_schema.png)

### Illustration du circuit

![Illustration du circuit de l'exemple pour contrôler une DEL](./del_arduino_illustration.png)
del_arduino

### Comparaison avec le circuit d'alimentation simple

![Comparaison du circuit d'alimentation simple à gauche avec celui de contrôle à droite](./Slide3.SVG)


![Comparaison du circuit d'alimentation simple à gauche avec celui de contrôle à droite](./del_alimentation_vs_controle_illustration.svg)


## Fonctions pertinentes

![Configuer la broche # en tant que sortie numérique](./pinModeOutput.svg)

![Activer 5V à la broche #](./digitalWriteHigh.svg)

![Activer 0V à la broche #](./digitalWriteLow.svg)

## Fonction additionnelle

![Bloquer/Arrêter le code pour un certain nombre de millisecondes](./delay.svg)


## Code complet 

```arduino
{{#include ./controle_del_arduino/controle_del_arduino.ino}}
```



