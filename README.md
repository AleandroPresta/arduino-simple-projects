# RGB LED Controller

This Arduino sketch allows users to control an RGB LED using serial commands. It maps specific color names to corresponding RGB values and adjusts the LED accordingly.

## Circuit

The circuit for this project can be accessed [here](https://www.tinkercad.com/things/35hPpDNyZWn-rgb-led?sharecode=4ILIv_S8k-5anMZsvn2yWJ6F-Cvbm8cTicP40dzF9yI) on Tinkercad.

## How It Works

- The sketch defines three PWM pins for red, green, and blue components of the RGB LED.
- It sets up serial communication for receiving color commands.
- When a color command is received via serial input, the sketch adjusts the PWM outputs of the corresponding pins to produce the desired color.

## Usage

1. Connect your Arduino board to your computer.
2. Upload the sketch to your Arduino board using the Arduino IDE or compatible software.
3. Open the serial monitor in the Arduino IDE or any serial communication software.
4. Send color commands (e.g., "red", "green", "blue", etc.) via the serial monitor to control the RGB LED.

## Supported Colors

- Red
- Green
- Blue
- Yellow
- Cyan
- Magenta
- White
- Orange
- Purple
- Pink

## Note

- Ensure the RGB LED is connected to the correct pins as specified in the sketch.
- Adjust the PWM values in the sketch if necessary to match the brightness levels of your LED.
- Use caution when handling electronic components and ensure proper connections to avoid damage to your Arduino board or LED.
