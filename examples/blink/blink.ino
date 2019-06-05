/* Example usage for PCA9534 library by Abdulrahman Saleh Khamis.
 * Demonstrates the use of output of the PCA9534.
 *
 * You need to connect:
 * LED to PCA9534 IO pin 0
 */

#include "PCA9534.h"

#define GPIO_PIN_LED           0  // LED connected to GPIO-0 as output

PCA9534 gpio;

// Helps ensure the application loop is not interrupted by the system
// background processing and network management.
SYSTEM_THREAD(ENABLED);

void setup() {
  gpio.begin();
  gpio.pinMode(GPIO_PIN_LED, OUTPUT);
}

void loop() {
  gpio.digitalWrite(GPIO_PIN_LED, LOW); // LED On
  delay(500);
  gpio.digitalWrite(GPIO_PIN_LED, HIGH); // LED Off
  delay(500);
}
