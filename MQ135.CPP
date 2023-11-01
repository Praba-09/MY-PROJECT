#include <MQ135.h>

// Define the pin where the MQ135 sensor is connected
const int MQ135Pin = A0;

// Create an instance of the MQ135 sensor
MQ135 gasSensor = MQ135(MQ135Pin);

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Read the sensor value
  float rZero = gasSensor.getRZero();
  float ppm = gasSensor.getPPM();

  // Print the sensor values
  Serial.print("RZero: ");
  Serial.println(rZero);
  Serial.print("PPM: ");
  Serial.println(ppm);

  delay(2000); // Delay between readings, adjust as needed
}
