
int led = 9;
void setup() {
   pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
   digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(100);               // wait for a second
   digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
   delay(100);               // wait for a second
}

