#define LED_BUILDIN 16
#define LED_RED 14
#define LED_GREEN 15

#define DELAY_1S 1000

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as output.
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BUILDIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
 digitalWrite(LED_RED, HIGH);   // turn the LED on (HIGH is the voltage level)
 delay(DELAY_1S);             // wait for a second
 digitalWrite(LED_RED, LOW);    // turn the LED off by making the voltage LOW        
 delay(DELAY_1S);             // wait for a second
 
 digitalWrite(LED_GREEN, HIGH);   
 delay(DELAY_1S);            
 digitalWrite(LED_GREEN, LOW);        
 delay(DELAY_1S);
 
 digitalWrite(LED_BUILDIN, HIGH); 
 delay(DELAY_1S);            
 digitalWrite(LED_BUILDIN, LOW);            
 delay(DELAY_1S);
}