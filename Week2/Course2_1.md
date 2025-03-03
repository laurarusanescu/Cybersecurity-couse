# Microcontrollers Training

## Agenda
- Embedded Systems
- Real-Time Systems
- Microcontrollers
- GPIO
- Interrupts

## Embedded Systems
### Examples:
- Cell-phones
- ATM Machines
- Digital Gas Stations
- Automotive Systems

## GPIO (General Purpose Input Output)
- Interface between microcontroller & environment
- Configurable as input/output
- Used for digital control lines

### Usage:
- Inputs: Digital sensors, temperature sensors, contacts
- Outputs: LED control, enable/disable devices

### Configuration:
- Direction: Input/Output
- Read/Write data
- Enable Pull-up/Pull-down resistors

### ATmega32 GPIO:
- 4 Ports: PORTA, PORTB, PORTC, PORTD
- Each port has 8 pins

## Interrupts
### What is an Interrupt?
- Interrupts break normal execution to handle high-priority tasks
- Faster response to internal/external events

### Examples:
- External Events: Button press, sensor signal
- Internal Events: ADC conversion complete, timer-based triggers

### Types of Interrupts:
- External Interrupts (Level/Edge sensitive)
- Internal (Timers, ADC, UART, etc.)
- Maskable & Non-Maskable Interrupts

### Handling Interrupts:
1. Accept request
2. Save context
3. Identify Interrupt Service Routine (ISR)
4. Execute ISR
5. Restore context & resume execution

### Interrupt Latency & Execution Time:
- Time from interrupt generation to service execution
- Affected by microcontroller architecture, priority levels, and system complexity

### ATmega32 Interrupt System:
- 4 external, 17 internal interrupts
- Prioritized interrupt vector table
- Interrupt flag register for event tracking

## Challenges & Exercises
- Configure GPIO and interrupts using ATmega32
- Implement button press detection
- Use interrupts to modify LED blinking speed

## Summary
- Understanding microcontroller architecture
- Configuring GPIO for input/output
- Handling interrupts efficiently
- Practical implementation on ATmega32
