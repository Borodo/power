int i;
void setup() {
  pinMode(3,OUTPUT);

}

void loop() {
  for (i = 255; i > 0; i=i-10){
    analogWrite(3, i);
    delay(100);
  }
  
  

}
