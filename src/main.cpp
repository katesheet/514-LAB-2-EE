#include <Arduino.h>
const int inputPin = D1; // Change this to your desired analog input pin

void setup() {
  Serial.begin(115200);
  pinMode(inputPin, INPUT);
}

void loop() {

  int sensorValue = analogRead(inputPin);
  float voltage = sensorValue * (3.3 / 4095.0); // Convert analog reading to voltage

  Serial.print("Voltage: ");
  Serial.println(voltage);


  delay(1000); // Wait for a second before repeating the loop
}
