
int leds = 0;
int capTouch = 3;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(leds, OUTPUT);
  pinMode(capTouch, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  if(digitalRead(capTouch)){
  digitalWrite(leds, HIGH);
  }else{                
  digitalWrite(leds, LOW);    
  }
  delay(5);                       
}
