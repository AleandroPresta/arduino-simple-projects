# Seven-Segment Display Countdown

This Arduino code is designed to control a seven-segment display to perform a countdown from 9 to 0. Each digit is displayed for one second before moving to the next.

## Description

The code initializes the pin connections for the seven-segment display in the `setup()` function. Then, in the `loop()` function, it sequentially calls functions to display digits 9 through 0, with a one-second delay between each digit.

Each digit is displayed by setting the corresponding pins to either HIGH (to light up a segment) or LOW (to turn it off) based on the segment configuration required to display the digit.

## Functionality

- `write9()`, `write8()`, ..., `write0()`: These functions set the pins to display the digits 9 through 0 on the seven-segment display by setting the appropriate pin configurations.
- `setup()`: Initializes pin modes for output.
- `loop()`: Calls functions to display digits 9 through 0 sequentially with delays between each digit.

## Pin Configuration

- `pinA` to `pinG`: Pins corresponding to the segments of the seven-segment display.
- `pinDP`: Pin for the decimal point segment.

## Tinkercad Project

You can view the simulation of this Arduino code in action on Tinkercad: [Countdown with One Digit](https://www.tinkercad.com/things/5Pu08LpYo4t-countdown-with-one-digit?sharecode=6hYF6KpjElx1Hxq78VZHFHC1EdlqGHJPLO1b0W69Rb4)

