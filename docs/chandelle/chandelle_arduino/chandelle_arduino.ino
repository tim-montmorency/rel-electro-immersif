int ledPin = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pwm = random(256);
  analogWrite(3, pwm);
  delay(20);
}
