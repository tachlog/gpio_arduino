void setup() {
  // define and set the digital pin as output 
  pinMode(13, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1 second (1000 milliseconds)
  
  // Turn the LED off
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1 second (1000 milliseconds)
}
