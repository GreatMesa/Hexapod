# Arduino Servo-Powered Hexapod

This hexapod robot is a six-legged walking remote controlled robot that is designed for experimental and recreational purposes.

## Introduction
The 6 legs on the robot are designed to be as stable as possible, this means that the robot doesn't have to spend as much of its power in active stabilization. Besides that, the robot is also made with 3 degree of freedom, which not only model a normal leg of a anthropod but also designates a part of the leg for horizontal, vertical, and extensional movements respectfully. This gives the robot 18 degrees of freedom in total, allowing for more complex walking gait cycles and overall complex movements such as jumping, turning, and speed adjustments. With this alongside potential future sensor integration, I plan to make a robot that can effectively traverse the enviroment around it.

## Manufacturing / Parts (Mechanical Aspect)
For the mechanical aspect of this project I decided to split it into non-custom mechanical part selection, non-custom electrionics selection, custom part manufacturing, and bill of materials. This allows me to better explain each proccess instead of it being all lumped together.

### Non-Custom Mechanical Part Selection
For the servo motors, I selected the DIGI MGR995 servos because of their lower. While it might seem a bit stingy, I simply did not have the resources to purchage higher grade servos, and these servos have held up in testing so far so I don't have much concern in replacing them. For the bearings (to reduce the friction on the legs) I utilized the MR148ZZ Deep Groove Ball Bearings due to how small yet efficient they were. For the screws, I selected M3 screws due to being the screw sizes that are standard for the servos I would be using while also being regularly used on 3D prints. Finally, the heated inserts I selected were the M3 3 * 4 * 5 inserts ude to interacting with the M3 screws.

### Non-Custom Electronics Selection
For the Arduino board, the only Arduino that had enough pins for what I wanted to accomplish was the Arduino Mega, although I am pondering a switch to the Arduino Mega Mini to have more space. For the wireless communication protocol I am using 2 NRF24L01+ modules. Besides these 2 sensors I also want to integrate sensors for the robot such as the MPU-6050, and for the RC Transceiver I plan to update this list with the according sensors.

### Custom Part Manufacturing
I plan to use Elegoo Plan PLUS to print out all the custom parts of the hexapod. This filament is good because it is inexpensive for how well it functions. Elegoo Pla Plus gives me the required strength I need for these parts while also allowing me to use a lower than normal infill percentage (15 %). I also plan to use 2 seperate colors (black and red) to not only distinguish between parts, but to also have a cool black spiderman color scheme.

### Bill of Materials (WIP)
