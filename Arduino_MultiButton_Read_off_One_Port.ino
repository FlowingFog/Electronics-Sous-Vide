double buttonRead;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
// Serial.println(analogRead(A0));
 buttonRead = analogRead(A0);
 if (buttonRead >= 185 && buttonRead <= 215) {
  Serial.println("Button 4 Pressed");
 }
 if (buttonRead >= 235 && buttonRead <= 265) {
  Serial.println("Button 3 Pressed");
 }
   if (buttonRead >= 315 && buttonRead <= 345) {
  Serial.println("Button 2 Pressed");
 }
 if (buttonRead >= 485 && buttonRead <= 515) {
  Serial.println("Button 1 Pressed");
 }
}
