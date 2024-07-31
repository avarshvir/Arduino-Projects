void setup() {
  // put your setup code here, to run once:
  pinMode(12,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12,HIGH);
  delay(500);   //delay for 0.5 seconds
  digitalWrite(12,LOW);
  delay(500);   

}
