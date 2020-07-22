
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600); //This pipes to the serial monitor
  Serial1.begin(9600); //This is the UART, pipes to sensors attached to board
}

// the loop function runs over and over again forever
void loop() {
  Serial.println("Hello world");  // Print "Hello World" to the Serial Monitor
  Serial1.println("Hello!");  // Print "Hello!" over hardware UART
  TXLED0; //TX LED is not tied to a normally controlled pin
  delay(100);              // wait for a second
  TXLED1;
  delay(1000);              // wait for a second
}
