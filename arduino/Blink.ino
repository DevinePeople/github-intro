
int led = 13;
//into pin 13 causes light to blink
void setup() {                

  pinMode(led, OUTPUT);     
}


void loop() {
  digitalWrite(led, HIGH);   
  delay(1000);  
  //increases amount of voltage going to light and the amount of time the voltage stays
  digitalWrite(led, LOW);
  //decreases amount of voltage going to light and the amount of time the voltage stays
  delay(1000);              
}
