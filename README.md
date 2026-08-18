Task 1.1P – Switching ON Lights
System Description

This project is designed to help Linda safely enter her house at night. When the push button is pressed, the porch light turns ON for 30 seconds and the hallway light turns ON for 60 seconds.

The system is built using an Arduino with a push button and two lights. The push button is used as the input, while the porch and hallway lights are used as outputs.

Code Overview

The program first defines the pins used for the push button, porch light, and hallway light.

In the setup() function, the push button is configured as an input using INPUT_PULLUP, and both lights are configured as outputs. The lights are initially turned OFF.

The turnOnPorchLight() function controls the porch light. It turns the porch light ON, keeps it ON for 30 seconds, and then turns it OFF.

The turnOnHallwayLight() function controls the hallway light. It turns the hallway light ON, keeps it ON for 60 seconds, and then turns it OFF.

The loop() function continuously checks whether the push button has been pressed. When the button is pressed, the program calls the porch light and hallway light functions.

Modular Programming

I used modular programming by separating the light-control tasks into different functions. Instead of putting all the light control directly inside the loop() function, I created turnOnPorchLight() and turnOnHallwayLight().

This makes the program easier to understand because each function has one specific purpose. It also makes the program easier to modify. For example, if I need to change the porch light timing, I can change it inside the porch light function without changing the main button-checking code.

Hardware Used
Arduino Nano 33 IoT
Push button
Porch light/LED
Hallway light/LED
Breadboard
Jumper wires
Resistors
