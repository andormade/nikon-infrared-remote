# nikon-infrared-remote

This is an Arduino sketch to remotely trigger a Nikon camera by flashing an IR LED.
I used George Christidis's [measurements](https://www.christidis.info/index.php/personal-projects/arduino-nikon-infrared-command-code) for setting the timing.

To compile the project you can use either the Arduino IDE or the CLI:

    arduino-cli compile --fqbn arduino:megaavr:nona4809

To upload it to your Arduino board:

    arduino-cli upload -p /dev/cu.usbmodem1101 --fqbn arduino:megaavr:nona4809
