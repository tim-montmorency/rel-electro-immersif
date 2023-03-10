int maDelBroche = 9;
int maDelPWM = 0;

unsigned long monChrono;

void setup() {
  Serial.begin(115200);
  
  pinMode( maDelBroche , OUTPUT);
}

void loop() {
  if ( millis() - monChrono >= 30 ) {
    monChrono = millis();
    
    maDelPWM = maDelPWM + 5;
    if ( maDelPWM > 255 ) maDelPWM = 0;

    analogWrite( maDelBroche , maDelPWM );

    Serial.print("analogWrite(");
    Serial.print(maDelBroche);
    Serial.print(",");
    Serial.print(maDelPWM);
    Serial.print(")");
    Serial.println();
  }
}
