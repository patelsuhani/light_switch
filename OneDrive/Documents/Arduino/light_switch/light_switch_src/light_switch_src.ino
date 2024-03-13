int switchState = 0;
void setup() { // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode (2,INPUT);  
}

void loop() { // put your main code here, to run repeatedly:
  switchState = digitalRead(2); 
  if (switchState == LOW) {
    // the button is not pressed
    digitalWrite(3, HIGH); //green LED on
    digitalWrite(4, LOW); //red LED off
    digitalWrite(5, LOW); //red LED off
  }
  else { //the button is pressed
    digitalWrite(3, LOW); //green LED off
    digitalWrite(4, LOW); //red LED on
    digitalWrite(5, HIGH); //red LED on
    delay(250); //wait for a quarter second
    //toggle the LEDs
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250); //wait for a quarter second
  } 
} //go back to the beginning of the loop