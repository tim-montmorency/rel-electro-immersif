int maBrochePWM = 9;
int maValeurPWM = 0;

unsigned long monChrono;

void setup() {
  Serial.begin(115200);
  
  pinMode( maBrochePWM , OUTPUT);
}

void loop() {
  if ( millis() - monChrono >= 30 ) {
    monChrono = millis();
    
    maValeurPWM = maValeurPWM + 5;
    if ( maValeurPWM > 255 ) maValeurPWM = 0;

    analogWrite( maBrochePWM , maValeurPWM );

    Serial.print("analogWrite(");
    Serial.print(maBrochePWM);
    Serial.print(",");
    Serial.print(maValeurPWM);
    Serial.print(")");
    Serial.println();
  }
}
