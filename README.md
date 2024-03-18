# Arduino LED Switch Control

This Arduino sketch controls three LEDs based on the state of a switch. When the switch is not pressed, a green LED is turned on. When the switch is pressed, a red LED blinks.

## Hardware Requirements
- Arduino board (e.g., Arduino Uno)
- 3 LEDs (1 green, 2 red)
- 1 momentary push-button switch
- Resistors for LEDs (optional, depending on the LEDs used)
- Breadboard and jumper wires

## Circuit Setup
- Connect the green LED to pin 3.
- Connect the two red LEDs to pins 4 and 5.
- Connect one end of the switch to pin 2 and the other end to GND.
- Add appropriate resistors in series with the LEDs to limit current if necessary.

## Usage
1. Upload the sketch to your Arduino board.
2. Press the momentary push-button switch to observe the LED behavior:
   - When the switch is not pressed, the green LED is on and the red LEDs are off.
   - When the switch is pressed, the green LED turns off and the red LEDs blink alternately.

## Files
- `led_switch_control.ino`: Arduino sketch file containing the code.
- `README.md`: This README file provides information about the project.

## Author
This Arduino sketch was authored by Suhani Patel.

## License
This project is licensed under the [MIT License](LICENSE).
