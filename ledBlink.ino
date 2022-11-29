int i = 0;
void setup() {
  pinMode(3,OUTPUT);
}


void loop(){
  delay(100);
  for (; i >= 0; i--){
    analogWrite(3, i);
    delay(5);
  }
  for (; i <= 255; i++){
    analogWrite(3, i);
    delay(5);
  }
}
