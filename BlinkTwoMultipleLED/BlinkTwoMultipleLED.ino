
//Blink Two LEDs at a same time 
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //I write 1000 for each but in practical LED off for 2 seconds.
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(1000);
  
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);

  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);

}
