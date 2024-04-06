// This C++ code sets up a simple countdown timer using an Adafruit 7-segment LED display and an Arduino board.
// It initializes the LED display and sets the starting value of the timer. 
// The loop continuously decrements the timer value and displays it on the LED display.
// When the timer reaches zero, it triggers a buzzer sound twice and stops the countdown.
// The boolean variable 'running' controls the execution of the countdown loop.
// This code is intended to be used with the Arduino platform.

#include "Adafruit_LEDBackpack.h"

Adafruit_7segment led_display1 = Adafruit_7segment();
int startValue = 10; // The starting value of the timer
bool running = true; // We need a boolean variable that blocks the execution of the loop() when the countdown finishes

void setup()
{
  led_display1.begin(112); // Initialize the LED display
  pinMode(12, OUTPUT); // Set pin 12 as an output for the buzzer
}

void loop()
{
  if (running) {
    if(startValue == 0) {
      // Trigger the buzzer sound twice when the countdown finishes
      digitalWrite(12, HIGH);
      delay(50);
      digitalWrite(12, HIGH);
      delay(50);
      digitalWrite(12, LOW);
      running = false; // Stop the countdown
    }
    // Display the current timer value on the LED display
    led_display1.println(startValue);
    led_display1.writeDisplay();
    startValue--; // Decrement the timer value
    delay(1000); // Wait for 1 second
  }
}
