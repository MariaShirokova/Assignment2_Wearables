int switch1val;
int switch2val;
int switch3val;

void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pins as inputs and enable the internal pull-up resistor
  //this helps to simpify the physical circuit
  pinMode(1, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(2, OUTPUT);

}

void loop() {
  // read the switch value
  switch1val = analogRead(0);
  // print out the switch value
  Serial.print(switch1val);
  // print a comma to separate the values
  Serial.print(",");

  

  delay(100); // the delay is necessary for the serial communication
if (switch1val>1020) {
  digitalWrite(2, HIGH);    // turn the LED off by making the voltage LOW
  delay(100); 
} else {
    digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  
}
//  // Turn on the built in LED any time any of the switches are activated
//  if (switch1val == LOW || switch2val == LOW || switch3val == LOW) {
//    digitalWrite(2, HIGH);
//  } else {
//    digitalWrite(2, LOW);
//  }
}
