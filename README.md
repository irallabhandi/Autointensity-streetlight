# Autointensity-streetlight

This repository contains code on the autointensity streetlight portion of our MPCA course project: autointensity streelights and motion detection of cars. 

## OBJECTIVE : 

To control intensity of street light automatically based on intensity of surrounding natural light.
To make a car detect a path and follow it.
To detect the motion of the car and signal it before it hits another car.

## DESCRIPTION : 

An LDR will be used to detect the intensity of light around the street light. Based on whether the surroundings are lighter or darker, the street light will change its intensity for better road visibility. Colour sensors are used to allow cars to follow a “road” (given path in black tape), and motion sensors are used to detect if a car is too close to another car while 
parking. If cars are in danger of colliding, an alarm goes off. Heat sensors are attached to the Arduino board to signal if the Arduino is overheated. 

## REQUIREMENTS : 
Arduino Uno
LDR- Light Dependent Resistor
Motion sensor
Color sensor
Bread board
12V DC Adapter
LED- Light Emitting Diode
10kΩ Resistor
DC motor
Wheels
Car body
Battery / cell (DC)
Black tape
Connecting wires

## Setup :

Prototype:

Multiple LEDs are connected in parallel to a given LDR. Along with this, an LCD is connected to the LDR to display the brightness of the light received by the LDR. The entire setup is on an Arduino Uno. As the light instensity around the LDR decreases, the brightenss of the LEDs proportionally increases. Another component is to 

## APPLICATIONS : 
Auto control of intensity of street lights in day to day life  
Preventing car collisions while parking 
Path following robots

## Built in:

C code using Arduino
