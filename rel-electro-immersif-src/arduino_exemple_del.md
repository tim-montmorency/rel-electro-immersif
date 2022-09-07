# Contrôler une DEL

## Segment de circuit

![Segment de circuit pour contrôler une DEL](arduino_exemple_del/Slide1.SVG)

## Circuit complet

![Circuit complet pour contrôler une DEL](arduino_exemple_del/Slide2.SVG)

### Comparaison avec le circuit d'alimentation simple

![Comparaison du circuit d'alimentation simple à gauche avec celui de contrôle à droite](arduino_exemple_del/Slide3.SVG)

## Fonctions pertinentes

![Configuer la broche # en tant que sortie numérique](arduino_code/pinModeOutput.svg)

![Activer 5V à la broche #](arduino_code/digitalWriteHigh.svg)

![Activer 0V à la broche #](arduino_code/digitalWriteLow.svg)

## Fonction additionnelle

![Bloquer/Arrêter le code pour un certains nombre de millisecondes](arduino_code/delay.svg)


## Code complet 

```cpp
const int sortieNumeriqueDel = 3;

void setup() {
  pinMode(sortieNumeriqueDel, OUTPUT);
}

void loop() {
  digitalWrite(sortieNumeriqueDel, HIGH);  
  delay(1000);               
  digitalWrite(sortieNumeriqueDel, LOW);    
  delay(1000);              
}
```



