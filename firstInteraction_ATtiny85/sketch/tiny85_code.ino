void setup() {
  // put your setup code here, to run once:
  pinMode(4, INPUT);
  pinMode(2, OUTPUT);

}

void loop() {
  if(digitalRead(4) == HIGH){
    digitalWrite(2, HIGH);
    }else{
      digitalWrite(2, LOW);
      }

    delay(10);
}
