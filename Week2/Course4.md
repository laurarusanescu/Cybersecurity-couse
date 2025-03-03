# Watchdog Timer (WDT) Lecture Notes

## What is a Watchdog Timer (WDT)?
- A Watchdog Timer is a hardware timer that automatically resets a system if the software fails to operate properly.
- It acts as a safety mechanism to prevent system hang-ups or crashes due to software errors or unexpected conditions.
- If the system does not reset the timer within a predefined interval, the WDT triggers a system reset.

## Where to Use a Watchdog Timer?
- **Embedded Systems**: Ensures reliability in systems where human intervention is minimal.
- **Automotive Applications**: Keeps control units (ECUs) functioning properly.
- **Industrial Control Systems**: Prevents process failures in automation.
- **Medical Devices**: Ensures continuous operation in life-critical systems.
- **IoT Devices**: Keeps connected devices running smoothly without requiring a manual reset.

## How to Use a Watchdog Timer?
### 1. Enable the Watchdog Timer
- Most microcontrollers provide a register to enable and configure the WDT.
- Example (ATmega32):
  ```c
  WDTCR = (1<<WDE) | (1<<WDP2) | (1<<WDP1); // Enable WDT with timeout
  ```

### 2. Periodically Reset the Watchdog
- The system must reset the WDT within the set interval to prevent a reset.
- Example (ATmega32):
  ```c
  wdt_reset(); // Reset the watchdog timer to prevent system reset
  ```

### 3. Configure Timeout Period
- Select a timeout value based on system requirements.
- Example timeout values:
  - 15ms, 30ms, 60ms, 120ms, 250ms, 500ms, 1s, 2s, etc.
- Set using prescaler bits in the WDT control register.

### 4. Handle System Reset
- When the WDT triggers, the system should enter a known recovery state.
- Check if the reset was due to a watchdog event.
- Example:
  ```c
  if (MCUSR & (1<<WDRF)) {
      // Take corrective action after watchdog reset
      MCUSR &= ~(1<<WDRF);
  }
  ```

## Examples
### Example 1: Simple Watchdog Implementation (ATmega32)
```c
#include <avr/io.h>
#include <avr/wdt.h>

void setup() {
    // Enable Watchdog Timer with 1s timeout
    WDTCR = (1<<WDE) | (1<<WDP2) | (1<<WDP1);
}

void loop() {
    // Reset the Watchdog Timer periodically
    wdt_reset();
    
    // Perform some task
    _delay_ms(500); // Simulate a running process
}
```

### Example 2: Using Watchdog in a Fault Recovery Mechanism
```c
#include <avr/io.h>
#include <avr/wdt.h>

void setup() {
    MCUSR &= ~(1<<WDRF); // Clear the Watchdog Reset Flag
    WDTCR = (1<<WDE) | (1<<WDP2) | (1<<WDP1); // Set 1s timeout
}

void loop() {
    if (some_error_condition) {
        while(1); // Simulate system hang-up
    }
    wdt_reset(); // Reset the watchdog timer
}
```

## Summary
- Watchdog Timers help ensure system reliability by resetting devices when software fails.
- Used in critical applications like automotive, industrial, and IoT devices.
- Must be configured with an appropriate timeout value.
- The system must periodically reset the watchdog to prevent unintended resets.
- Handling watchdog resets properly can improve system recovery from faults.

### Discussion Questions
1. What happens if the watchdog is not reset in time?
2. In which situations should we disable the watchdog?
3. How does a watchdog timer improve fault tolerance?
