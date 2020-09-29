int redpin = 5; 
int greenpin = 3;
int bluepin = 7;

void setup() {
  pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  int val;  
  
  for (val=255; val>0; val--) {
    analogWrite(redpin, val);
    analogWrite(greenpin, 128-val);
    analogWrite(bluepin, 255-val);
    delay(1);
  }
  
  Serial.println (val, DEC);
}
