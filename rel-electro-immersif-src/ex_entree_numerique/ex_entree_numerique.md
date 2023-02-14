# Une entrée numérique contrôlant une sortie numérique


## Allumer ou éteindre une DEL à partir d'un interrupteur
```arduino
int brocheDel = 3;
int brocheInterrupteur = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode( brocheDel , OUTPUT);
  pinMode( brocheInterrupteur , INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int mesureDeTension = digitalRead( brocheInterrupteur); 
  if ( mesureDeTension == LOW ) {
    digitalWrite( brocheDel, HIGH);
  } else {
    digitalWrite( brocheDel, LOW);
  }
}
```

## Contrôler le clignotement d'une DEL à partir d'un interrupteur
```arduino
int brocheDel = 3;
int brocheInterrupteur = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode( brocheDel , OUTPUT);
  pinMode( brocheInterrupteur , INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int mesureDeTension = digitalRead( brocheInterrupteur); 
  if ( mesureDeTension == LOW ) {
    digitalWrite( brocheDel, HIGH);
    delay(250);
    digitalWrite( brocheDel, LOW);
    delay(250);
  } else {
    digitalWrite( brocheDel, LOW);
  }
}
```
