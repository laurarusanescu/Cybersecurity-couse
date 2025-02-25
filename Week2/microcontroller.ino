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
