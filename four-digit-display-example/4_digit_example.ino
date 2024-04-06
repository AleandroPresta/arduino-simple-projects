// C++ code to control a 4-Digit 7-Segment LED Display using Adafruit_LEDBackpack library

// Include the Adafruit_LEDBackpack library
#include "Adafruit_LEDBackpack.h"

// Define a variable to store the value to be displayed on the LED display
int writeValue = 1000;

// Initialize a 7-segment LED display object
Adafruit_7segment led_display1 = Adafruit_7segment();

// Setup function: runs once when the microcontroller starts
void setup() {
  // Begin communication with the LED display using I2C address 112
  led_display1.begin(112);
}

// Loop function: runs repeatedly as long as the microcontroller is powered
void loop() {
  // Print the value stored in writeValue to the LED display
  led_display1.println(writeValue);
  // Write the displayed value to the LED display
  led_display1.writeDisplay();
  // Delay for 100 milliseconds before repeating the loop
  delay(100);
}
