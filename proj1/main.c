#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, Philippines!");
}

void setup() {
  Serial.begin(9600);     
  pinMode(13, OUTPUT);    
}

void loop() {
  Serial.println("LED ON");  
  digitalWrite(13, HIGH);     
  delay(1000);                

  Serial.println("LED OFF");
  digitalWrite(13, LOW);      
  delay(1000);
  
}

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