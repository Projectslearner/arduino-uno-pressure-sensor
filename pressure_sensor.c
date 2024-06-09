/*
    Project name : Pressure Sensor
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-pressure-sensor
*/

const int sensorPin = A0; // Analog pin connected to the pressure sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read analog value from sensor
  Serial.print("Analog Value: ");
  Serial.println(sensorValue); // Print analog value to serial monitor
  delay(100); // Delay for stability
}
