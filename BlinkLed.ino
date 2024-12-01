Int ledPin 14;


void setup() {

  pinMode(ledPin, OUTPUT);
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);                     
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000);       
}

