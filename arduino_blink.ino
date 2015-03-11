int x = 50;
int y = 100;
int LED =8;
int TWO = 9;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LED, OUTPUT);
  pinMode (TWO, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(x);              // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(x); 
  
  digitalWrite(TWO, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(y);              // wait for a second
  digitalWrite(TWO, HIGH);    // turn the LED off by making the voltage LOW
  delay(y);              // wait for a second
}
