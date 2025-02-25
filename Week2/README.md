# LED Button Control using AVR Registers

## Overview
This project demonstrates how to control an LED using a button, directly manipulating the AVR registers instead of using standard Arduino functions like `digitalRead()` or `digitalWrite()`. The LED turns on when the button is pressed and turns off when released.

## Hardware Requirements
- Microcontroller (e.g., ATmega328P)
- LED
- 330Ω resistor (for LED)
- Push button
- Pull-up resistor (if not using the internal one)
- Breadboard & jumper wires

## Circuit Diagram

```
   +5V
    |
    |         LED
    |----->|----[330Ω]---- GND
    |       PB1 (Output)

  Button
  [ ]------ PB0 (Input)
  [ ]------ GND
```

## Code Explanation
- **Registers Used:**
  - `DDRB`: Configures data direction (input/output) of Port B pins.
  - `PORTB`: Controls the output value of Port B pins and enables pull-up resistors.
  - `PINB`: Reads the current input values of Port B pins.
- **Functionality:**
  - `PB0` (Button) is set as an **input** with an **internal pull-up resistor**.
  - `PB1` (LED) is set as an **output**.
  - When the button is pressed (`PB0` goes LOW), the LED turns **on** (`PB1 HIGH`).
  - When the button is released (`PB0` is HIGH due to pull-up), the LED turns **off** (`PB1 LOW`).

## Graph Representation of LED Behavior

The following graph shows the LED state based on button input:

```
Button State (PB0) | LED State (PB1)
-------------------|---------------
       HIGH       |     OFF
       LOW        |     ON
```

## Code
```cpp
#define BUTTON PB0
#define LED PB1

void setup()
{
    DDRB &= ~(1 << BUTTON); // Set PB0 as input
    PORTB |= (1 << BUTTON); // Enable internal pull-up resistor on PB0

    DDRB |= (1 << LED); // Set PB1 as output

    Serial.begin(9600);
}

void loop()
{
    if (PINB & (1 << BUTTON)) // Button is not pressed
    {
        Serial.println("Button is not Pressed!");
        PORTB &= ~(1 << LED); // Turn off LED
    }
    else // Button is pressed
    {
        Serial.println("Button Pressed!");
        PORTB |= (1 << LED); // Turn on LED
    }

    delay(100); // Debounce delay
}
```

## Usage Instructions
1. **Connect the components** as shown in the diagram.
2. **Upload the code** to your microcontroller.
3. **Open the Serial Monitor** (9600 baud) to see button press messages.
4. **Press the button** to turn the LED on, release to turn it off.

## Notes
- The internal pull-up resistor eliminates the need for an external one.
- The `delay(100);` helps to debounce the button.

### Author
- Your Name

