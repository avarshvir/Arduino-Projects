void setup(){
  
  pinMode(13,OUTPUT);   // top red
  pinMode(12,OUTPUT);   // top yellow
  pinMode(11,OUTPUT);   // top green

  pinMode(10,OUTPUT);   // left red
  pinMode(9,OUTPUT);    // left yellow
  pinMode(8,OUTPUT);    // left green

  pinMode(5,OUTPUT);   // bottom red
  pinMode(6,OUTPUT);   // bottom yellow
  pinMode(7,OUTPUT);   // bottom green

  pinMode(2,OUTPUT);   // right red
  pinMode(3,OUTPUT);   // right yellow
  pinMode(4,OUTPUT);   // right green
  
}
void loop(){

  digitalWrite(11, HIGH);  // Top green on
  digitalWrite(10, HIGH);  // Left red on
  digitalWrite(5, HIGH);   // Bottom red on
  digitalWrite(2, HIGH);   // Right red on
  delay(2000);             // Wait for 2 seconds

  // Step 2: 1 second left for top green, turn on right yellow
  digitalWrite(3, HIGH);   // Right yellow on
  delay(1000);             // Wait for 1 second
  digitalWrite(11, LOW);   // Top green off
  digitalWrite(3, LOW);    // Right yellow off

  // Step 3: Turn on top red and right green for 3 seconds
  digitalWrite(13, HIGH);  // Top red on
  digitalWrite(4, HIGH);   // Right green on
  delay(2000);             // Wait for 2 seconds

  // Step 4: 1 second left for right green, turn on bottom yellow
  digitalWrite(6, HIGH);   // Bottom yellow on
  delay(1000);             // Wait for 1 second
  digitalWrite(4, LOW);    // Right green off
  digitalWrite(6, LOW);    // Bottom yellow off

  // Step 5: Turn on right red and bottom green for 3 seconds
  digitalWrite(2, HIGH);   // Right red on
  digitalWrite(7, HIGH);   // Bottom green on
  delay(2000);             // Wait for 2 seconds

  // Step 6: 1 second left for bottom green, turn on left yellow
  digitalWrite(9, HIGH);   // Left yellow on
  delay(1000);             // Wait for 1 second
  digitalWrite(7, LOW);    // Bottom green off
  digitalWrite(9, LOW);    // Left yellow off

  // Step 7: Turn on bottom red and left green for 3 seconds
  digitalWrite(5, HIGH);   // Bottom red on
  digitalWrite(8, HIGH);   // Left green on
  delay(2000);             // Wait for 2 seconds

  // Step 8: 1 second left for left green, turn on top yellow
  digitalWrite(12, HIGH);  // Top yellow on
  delay(1000);             // Wait for 1 second
  digitalWrite(8, LOW);    // Left green off
  digitalWrite(12, LOW);   // Top yellow off

  // Step 9: Turn on left red and top green for 3 seconds
  digitalWrite(10, HIGH);  // Left red on
  digitalWrite(11, HIGH);  // Top green on
  delay(2000);             // Wait for 2 seconds

  // Step 10: 1 second left for top green, turn on right yellow
  digitalWrite(3, HIGH);   // Right yellow on
  delay(1000);             // Wait for 1 second
  digitalWrite(11, LOW);   // Top green off
  digitalWrite(3, LOW);    // Right yellow off

  // Reset all LEDs to off before repeating the cycle
  digitalWrite(13, LOW);   // Top red off
  digitalWrite(10, LOW);   // Left red off
  digitalWrite(5, LOW);    // Bottom red off
  digitalWrite(2, LOW);    // Right red off

}