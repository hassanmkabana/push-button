/*
  code by Hassan
  writen on 23/01/2020
*/
// the setup function runs once when you press reset or power the board
int pin =9;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin ,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
 // delay(1000);                       // wait for a second
 // digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
 // delay(1000);                       // wait for a second
}
