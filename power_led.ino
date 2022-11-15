int t = 50;
void setup() {
  pinMode(3,OUTPUT);

}

void loop() {
  analogWrite(3, 50);
  delay(t);
  analogWrite(3, 100);
  delay(t);
  analogWrite(3, 150);
  delay(t);
  analogWrite(3, 200);
  delay(t);
  analogWrite(3, 255);
  delay(t);

}
