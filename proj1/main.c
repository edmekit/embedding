#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//blink built-in LED
void setup() {

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