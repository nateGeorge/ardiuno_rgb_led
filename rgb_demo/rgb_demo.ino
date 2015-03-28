int redpin = 4; // select the pin for the red LED
int greenpin = 5;// select the pin for the green LED
int bluepin = 6; // select the pin for the blue LED

int intensity;

void setup() {
    pinMode(redpin, OUTPUT);
    pinMode(bluepin, OUTPUT);
    pinMode(greenpin, OUTPUT);
    Serial.begin (9600);
}

void loop() {
  for (intensity = 0; intensity<255; intensity++) {
    analogWrite(redpin, intensity);
    analogWrite(greenpin, 0);
    analogWrite(bluepin, 255-intensity);
    delay(10);
  }
  
  for (intensity = 0; intensity<255; intensity++) {
    analogWrite(redpin, 255-intensity);
    analogWrite(greenpin, intensity);
    analogWrite(bluepin, 0);
    delay(10);
  }
  
  for (intensity = 0; intensity<255; intensity++) {
    analogWrite(redpin, 0);
    analogWrite(greenpin, 255-intensity);
    analogWrite(bluepin, intensity);
    delay(10);
  }
}
