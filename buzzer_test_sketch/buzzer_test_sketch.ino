int buzzPin = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzPin, HIGH);
  delay(2000);
  digitalWrite(buzzPin, LOW);
}
