#include <Arduino.h>

#define LED_PIN 2
#define tempo 500

void setup() {
  
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(LED_PIN, HIGH);
  delay(tempo);
  digitalWrite(LED_PIN, LOW);
  delay(tempo);

  Serial.println("Olá, mundo.");
}
