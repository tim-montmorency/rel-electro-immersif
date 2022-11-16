

struct {
  int broche = 9;
  int pwm = 0;
} maDel;

unsigned long monChrono;

void setup() {
  Serial.begin(115200);
  
  pinMode( maDel.broche  , OUTPUT);
}

void loop() {
  if ( monChrono - millis() >= 30 ) {
    monChrono = millis();
    
    maDel.pwm = maDel.pwm + 5;
    if ( maDel.pwm > 255 ) maDel.pwm = 0;

    analogWrite( maDel.broche , maDel.pwm );

    Serial.print("analogWrite("); Serial.print(maDel.broche); Serial.print(","); Serial.print(maDel.pwm); Serial.print(")"); Serial.println();
  }
}
