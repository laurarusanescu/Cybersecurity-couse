# Microcontrollers Training

## Agenda
- Embedded Systems (examples, definitions)
- Real Time Systems (definitions, operating system)
- Microcontrollers (architecture, internal view, package)

## Embedded Systems
### Examples
- Cell-phones
- Automatic Teller Machine
- The Digital Interfaced Gasoline Station
- Airborne Flight Control System
- Automotive Engine Management System
- Home Security Systems
- Modern Air-conditioners
- Washing Machines
- Medical Equipment
- DVD Players
- Printers

### Cell-phone Example
#### Features from a User Perspective
- Price, Weight, and Size
- Screen type and size
- Games included and downloadable
- Digital camera – pixels and resolution, zoom
- Radio, Calculator, Address book, E-mail
- Ring tones e.g. polyphonic or MP3
- Memory e.g. built-in or external
- Network type e.g. GSM or CDMA
- Battery: Type and ampere hour, Talk-time per charge, Standby time

These functions are achieved using a **flexible device → Embedded processor**.
The object (e.g. mobile phone) housing the embedded processor is called an **Embedding System**.

### Embedded System - Definitions
- A computer system that is part of a larger system and performs specific tasks.
- Designed for specific control functions within a larger system.
- Uses a microcontroller, microprocessor, or DSP chip.
- Often used without user awareness (e.g. digital clock, home alarm, airbag controller).
- Combination of hardware, software, and mechanical parts designed for a specific function.

### Summary - Embedded System Keywords
- A **computer**
- **Performs a specific task**
- **Part of a larger system**
- **Users are unaware of its existence**

### Embedded System vs. Personal Computer
- A **PC** is flexible and general-purpose.
- Embedded systems are dedicated to specific tasks.
- A **PC** contains multiple embedded systems.

### Embedded System in Automotive
- **Low-end** cars contain at least a dozen microprocessors.
- **High-end** cars contain over 100 microprocessors.
- Functional areas:
  - **Chassis & Safety**
  - **Powertrain**
  - **Interior**

### Generic Embedded System Components
- **Processor** and **software**
- **Memory** for executable code and runtime data
- **Inputs & Outputs** (e.g. buttons, display)

### Common Design Requirements
- **Processing power** (MIPS rating)
- **Memory** (ROM, RAM)
- **Development cost** (hardware and software)
- **Production cost** (related to expected number of units)
- **Expected lifetime** (how long it must function)
- **Reliability**

---

## Real-Time Systems
### Keywords
- A **computer**
- **Performs a specific task**
- **Part of a larger system**
- **Users are unaware of its existence**
- **Time constraint**

### Definitions
- Must process computation **during** an external process to ensure timely response.
- **Mission-critical** systems where failure = catastrophic.
- Timing constraints are as important as correctness.

### Real-Time Operating System (RTOS)
- Supports **real-time systems**.
- Responds to external inputs **within a time limit**.
- **Key characteristic**: Consistency in response time (**jitter**).
- **Types:**
  - **Hard RTOS**: Strict time constraints (e.g. airbag ECU, flight control system).
  - **Soft RTOS**: Flexible timing but prioritizes critical tasks (e.g. multimedia player).

### Multitasking in RTOS
- **Cooperative multitasking**: Tasks voluntarily release CPU time.
- **Preemptive multitasking**: Tasks can be rescheduled based on priority.

---

## Microcontrollers
### Types of Processors
- **Microprocessors**
- **Microcontrollers**
- **Digital Signal Processors (DSPs)**
- **ASICs & Specialized Controllers**

A **Microcontroller (µC or MCU)** is a small computer on a **single chip** containing:
- Processor core
- Memory
- Programmable I/O peripherals

### Architecture Types
- **von Neumann**: Shared bus for data and instructions.
- **Harvard**: Separate buses for data and instructions.
- **Modified Harvard**: Mixed approach with cache.

### Internal View
- **Examples**: Intel 8742, PIC16F84

### Microcontroller Boot-up Principles
- **Register-based CPUs**: Store data in registers (e.g. ARM, x86, Java Virtual Machine - Dalvik).
- **Stack-based CPUs**: Use stack for operations (e.g. Java Optimized Processor, Oracle JVM).

### Endian-ness & Microarchitecture
- **Big Endian vs. Little Endian**
- **Symmetric Multi-Processing (SMP) capability**
- **Hardware multithreading**
- **Multimedia extensions (MMX, SSE, 3D Now, Altivec, etc.)**

### Number Systems (Decimal, Binary, Hexadecimal)
- **DEC → BIN**: Divide by 2, record remainder.
- **DEC → HEX**: Divide by 16, record remainder.
- **Computers use binary internally, but HEX for readability**.

### CPU Components
- **Registers**
- **ALU (Arithmetic Logic Unit)**
- **Flags**
- **Control Unit (CU)**
- **Floating Point Unit (FPU)**

### Memory Types
#### Volatile Memory (RAM)
- **Does not retain data without power**
- **Types**:
  - **SRAM (Static RAM)**: Faster, no refresh required.
  - **DRAM (Dynamic RAM)**: Requires refresh but is more cost-efficient.

#### Non-Volatile Memory (ROM, Flash, EEPROM)
- **Retains data without power**
- **Types**:
  - **Flash Memory** (Used in microcontrollers)
  - **EEPROM** (Allows erasing at byte level)

#### Serial Memory
- **Connected via SPI, UART, I2C**
- **Reduces pin count but increases complexity**

---
