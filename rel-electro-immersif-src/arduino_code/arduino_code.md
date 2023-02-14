# Le code Arduino

## Références

* [Référence Arduino sur Arduino.cc](https://www.arduino.cc/reference/en/)
* [Arduino Programming Notebook de Bryan W Evans (2017) en version PDF](../pdf/arduino_programming_notebook-bryan_w_evans.pdf)


## Code minimal

```arduino

// VARIABLE GLOBALES

void setup() {
  // CODE À ROULER AU DÉMARRAGE

}

void loop() {
  // CODE À RÉPÉTER (LE PLUS RAPIDEMENT POSSIBLE)

}
```
On retoruve deux fonctions dans le code minimal : 
* `setup()`
* `loop()`

### setup()

La fonction setup() est appelée une seule fois lorsque le programme commence. C'est pourquoi c'est dans cette fonction que l'on va écrire le code qui n'a besoin d'être exécuté qu’une seule fois. C'est une  fonction d'initialisation. On y retrouvera la mise en place des différentes sorties et quelques autres réglages.

### loop()

Une fois que l'on a initialisé le programme, il faut ensuite créer le «cœur» du programme, autrement dit le programme en lui même. C'est dans la fonction loop() que l’on va écrire le contenu du programme. Il faut savoir que cette fonction est appelée en permanence, c'est-à-dire qu'elle est exécutée une fois, puis lorsque son exécution est terminée, on la réexécute, encore et encore. On parle de boucle infinie!

## Déroulement du programme

![...](./Slide1.SVG)

## Les instructions 


![...](./Slide3.SVG)

## Variables de base

![...](./Slide4.SVG)

## «Arduino Cheat Sheet» de SparkFun

![Capture d'écran du «Arduino Cheat Sheet» de SparkFun](./sparkfun_arduino_cheat_sheat.png)

La version PDF du «Arduino Cheat Sheet» de SparkFun peut être téléchargée ici : [SparkFun Education - Classroom Downloads - Arduino Cheatsheet](https://sparkfuneducation.com/classroom-downloads/arduino-cheatsheet.html)

## Analyse du code «Blink»

![...](./Slide5.SVG)

## Ressources additionnelles

* [FLOSS Manuals: Programmer-Arduino / Arduino](https://fr.flossmanuals.net/arduino/programmer-arduino/)
* [FLOSS Manuals: Comment-Bien-Structurer-Son-Code / Arduino](https://fr.flossmanuals.net/arduino/comment-bien-structurer-son-code/)
