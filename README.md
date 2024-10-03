# Arduino Lightning Simulation

This repository contains Arduino sketches for simulating lightning effects using LEDs. The code is designed to create random lightning flashes across multiple LEDs, providing a realistic lightning effect.

## Files

### `lighting_sequence.ino`

- **Authors**: Rob Tillaart, Adrian Sanabria-Diaz
- **Date**: 2022-05-03
- **Purpose**: Simulate lightning proof of concept (POC) with multi-LED support selected at random.

#### Overview

This sketch initializes a set of PWM pins connected to LEDs and simulates lightning by randomly selecting LEDs to flash at random intervals and durations.

#### Key Parameters

- `BETWEEN`: The maximum interval between flashes (in milliseconds).
- `DURATION`: The maximum duration of each flash (in milliseconds).
- `TIMES`: The maximum number of flashes per LED in one cycle.

#### Setup

- Initializes serial communication at 115200 baud.
- Sets the PWM pins as outputs.

#### Loop

- Checks if it's time for a new flash.
- Randomly selects LEDs and flashes them for random durations.

### `lightning_led.ino`

- **Authors**: Rob Tillaart, Adrian Sanabria-Diaz
- **Date**: 2022-05-03
- **Purpose**: Simulate lightning POC with additional initial LED sequence.

#### Overview

This sketch is similar to `lighting_sequence.ino` but includes an initial sequence where all LEDs are flashed in a loop before starting the random lightning simulation.

#### Key Parameters

- `BETWEEN`: The maximum interval between flashes (in milliseconds).
- `DURATION`: The maximum duration of each flash (in milliseconds).
- `TIMES`: The maximum number of flashes per LED in one cycle.

#### Setup

- Initializes serial communication at 115200 baud.
- Sets the PWM pins as outputs.
- Flashes all LEDs in a loop three times before starting the main loop.

#### Loop

- Checks if it's time for a new flash.
- Randomly selects LEDs and flashes them for random durations.

## Getting Started

1. **Hardware Requirements**:
   - Arduino board (e.g., Uno, Mega)
   - LEDs connected to PWM pins (3, 5, 6, 9, 10, 11)

2. **Software Requirements**:
   - Arduino IDE

3. **Installation**:
   - Clone this repository.
   - Open the desired `.ino` file in the Arduino IDE.
   - Upload the sketch to your Arduino board.

## Usage

- Connect your LEDs to the specified PWM pins.
- Open the serial monitor to view debug messages.
- Observe the random lightning effects on the LEDs.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Rob Tillaart for the initial implementation.
- Adrian Sanabria-Diaz for adding multi-LED support.
