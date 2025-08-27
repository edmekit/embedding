#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//blink built-in LED



//blink LED using button
void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(4) == LOW)
  {
    digitalWrite(2, HIGH);
  }
  else
  {
    digitalWrite(2, LOW);
  }
}



//Christmas lights
void setup() {
  Serial.begin(115200);
  Serial.println("Christmas Tree");
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH);

  delay(100);
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);

  
  delay(100);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);

  

  delay(100);
  digitalWrite(5, LOW);
  
}

void setup() {
  Serial.begin(115200);
  Serial.println("Christmas Tree");
  pinMode(23, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(22, OUTPUT);

}

void loop() {
  digitalWrite(23, HIGH);

  delay(100);
  digitalWrite(33, HIGH);
  digitalWrite(23, LOW);

  delay(100);
  digitalWrite(32, HIGH);
  digitalWrite(33, LOW);

  delay(100);
  digitalWrite(13, HIGH);
  digitalWrite(32, LOW);

  delay(100);
  digitalWrite(18, HIGH);
  digitalWrite(13, LOW);

  delay(100);
  digitalWrite(19, HIGH);
  digitalWrite(18, LOW);

  delay(100);
  digitalWrite(21, HIGH);
  digitalWrite(19, LOW);

  delay(100);
  digitalWrite(22, HIGH);
  digitalWrite(21, LOW);

  delay(100);
  digitalWrite(22, LOW);
}


// toggle button
int buttonPin = 4;
int ledPin = 2;
bool lastState = HIGH;
bool ledState = false;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop(){
  bool buttonState = digitalRead(buttonPin);

  if (lastState == HIGH && buttonState == LOW) 
  {
    ledState = !ledState;
    digitalWrite(2, ledState ? HIGH : LOW);
  }
  lastState = buttonState;
}
