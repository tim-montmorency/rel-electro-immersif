int maBrocheDel = 9;

unsigned long monChrono;

void setup() {
  pinMode(maBrocheDel, OUTPUT);
}

void loop() {

  if ( millis() - monChrono >= 20 ) {
    monChrono = millis();

    int monMin = 0;
    int monMax = 256;
    int maValeurAleatoire = random( monMin , monMax );

    analogWrite(maBrocheDel, maValeurAleatoire);

  }
}
