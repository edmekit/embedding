#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, Philippines!");
}

void setup() {
  Serial.begin(9600);     // Start Serial communication at 9600 baud
  pinMode(13, OUTPUT);    // Set pin 13 (built-in LED) as output
}

void loop() {
  Serial.println("LED ON");   // Print to Serial Monitor
  digitalWrite(13, HIGH);     // Turn LED on
  delay(1000);                // Wait 1 second

  Serial.println("LED OFF");
  digitalWrite(13, LOW);      // Turn LED off
  delay(1000);                // Wait 1 second
}