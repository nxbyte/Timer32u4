/*
 * Code        : Timer32u4
 * Description : Source code to enable timer 1, 3, 4 on a 32u4 microcontroller
*/

void setup() {

  Serial.begin(9600);
  
  noInterrupts();                        // disable all interrupts

  // Timer 1
  TCNT1 = 0;                             // Set initial value
  TIMSK1 = 0x01;                         // Enable/Disable Timer1
  TCCR1A = 0;                            // normal operation page 148 (mode0);
  TCCR1B = 0x3;                          // Set Timer4 prescaler to 64
  
  // Timer 3
  TCNT3 = 0;                             // Set initial value
  TIMSK3 = 0x01;                         // Enable/Disable Timer3
  TCCR3A = 0;                            // normal operation page 148 (mode0);
  TCCR3B = 0x5;                          // Set Timer4 prescaler to 1024

  // Timer 4
  TCNT4 = 0;                             // Set initial value
  TIMSK4 = (1<<TOIE4);                   // Enable/Disable Timer4
  TCCR4A = TCCR4C = TCCR4D = TCCR4E = 0; // normal operation page 148 (mode0);
  TCCR4B = 0xc;                          // Set Timer4 prescaler to 2048

  interrupts();                          // enable all interrupts
}

// the loop function runs over and over again forever
void loop() {

}

ISR(TIMER1_OVF_vect) {
  //TCNT1 = 0;                  // (Optional) Reset timer to a starting value
  Serial.println("Timer 1!");
}

ISR(TIMER3_OVF_vect) {
  //TCNT3 = 0;                  // (Optional) Reset timer to a starting value
  Serial.println("Timer 3!");
}

ISR(TIMER4_OVF_vect) {
  //TCNT4 = 0;                  // (Optional) Reset timer to a starting value
  Serial.println("Timer 4!");
}

