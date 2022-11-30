# Contrôler une DEL

![Fiche synthèse pour allumer une DEL](./arduino_allumer_del_resume.svg)


## Segment de circuit

![Segment de circuit pour contrôler une DEL](./Slide1.SVG)

## Circuit complet

![Circuit complet pour contrôler une DEL](./Slide2.SVG)

### Comparaison avec le circuit d'alimentation simple

![Comparaison du circuit d'alimentation simple à gauche avec celui de contrôle à droite](./Slide3.SVG)

## Fonctions pertinentes

![Configuer la broche # en tant que sortie numérique](./pinModeOutput.svg)

![Activer 5V à la broche #](./digitalWriteHigh.svg)

![Activer 0V à la broche #](./digitalWriteLow.svg)

## Fonction additionnelle

![Bloquer/Arrêter le code pour un certains nombre de millisecondes](./delay.svg)


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



