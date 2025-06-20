# Arduino Servo-Powered Hexapod

![image](https://github.com/GreatMesa/Hexapod/blob/main/Images/Hexapod%20-%20Transparent%20BG.png)

This hexapod robot is a six-legged walking remote controlled robot that is designed for experimental and recreational purposes.

## Introduction
The 6 legs on the robot are designed to be as stable as possible, this means that the robot doesn't have to spend as much of its power in active stabilization. Besides that, the robot is also made with 3 degree of freedom, which not only model a normal leg of a anthropod but also designates a part of the leg for horizontal, vertical, and extensional movements respectfully. This gives the robot 18 degrees of freedom in total, allowing for more complex walking gait cycles and overall complex movements such as jumping, turning, and speed adjustments. With this alongside potential future sensor integration, I plan to make a robot that can effectively traverse the enviroment around it.

## Manufacturing / Parts (Mechanical Aspect)
For the mechanical aspect of this project I decided to split it into non-custom mechanical part selection, non-custom electrionics selection, custom part manufacturing, and bill of materials. This allows me to better explain each proccess instead of it being all lumped together.

### Non-Custom Mechanical Part Selection
For the servo motors, I want to use the DSServo 35KG servos due to their fast speed and high load tolerance. For the bearings (to reduce the friction on the legs) I utilized the MR148ZZ Deep Groove Ball Bearings due to how small yet efficient they were. For the screws, I selected M3 screws due to being the screw sizes that are standard for the servos I would be using while also being regularly used on 3D prints. Finally, the heated inserts I selected were the M3 3 * 4 * 5 inserts ude to interacting with the M3 screws.

### Non-Custom Electronics Selection
For the Arduino board, the only Arduino that had enough pins for what I wanted to accomplish was the Arduino Mega, although I am pondering a switch to the Arduino Mega Mini to have more space. For the wireless communication protocol I am using 2 NRF24L01+ modules. Besides these 2 sensors I also want to integrate sensors for the robot such as the MPU-6050, and for the RC Transceiver I plan to update this list with the according sensors.

### Custom Part Manufacturing
I plan to use Elegoo Plan PLUS to print out all the custom parts of the hexapod. This filament is good because it is inexpensive for how well it functions. Elegoo Pla Plus gives me the required strength I need for these parts while also allowing me to use a lower than normal infill percentage (15 %). I also plan to use 2 seperate colors (black and red) to not only distinguish between parts, but to also have a cool black spiderman color scheme.

# Component Purchase List

| Item Name | Price (USD) | Quantity | Total Price (USD) | Purchase Link |
|-----------|-------------|----------|--------------------|----------------|
| Dsservo 35KG DS3235 Metal Gear Digital Servo | $8.37 | 18 | $150.66 | [Alibaba](https://www.alibaba.com/product-detail/Dsservo-Waterproof-Servo-High-Torque-35KG_62204650069.html) |
| Chanzon Header Strip for Arduino GPIO 40-pin x 20pcs Female/Male Pins | $9.99 | 1 | $9.99 | [Amazon](https://www.amazon.com/gp/product/B09MY5MJ36) |
| HiLetgo 4pcs NRF24L01+ | $7.89 | 1 | $7.89 | [Amazon](https://www.amazon.com/gp/product/B00LX47OCY) |
| 1600 Pcs M3 Screw Kit, M3 Button Head and Socket Head Screws | $15.00 | 1 | $15.00 | [Amazon](https://www.amazon.com/Takytao-Button-Screws-Machine-Assortment/dp/B0D3TRRKSG) |
| SUNLU TPU 3D Printer Filament 1.75mm | $23.99 | 1 | $23.99 | [Amazon](https://www.amazon.com/SUNLU-TPU-Filament-1-75mm-Flexible/dp/B0BXNWK6NS) |
| ELEGOO PLA Plus Filament 1.75mm Red 1KG | $19.99 | 1 | $19.99 | [Amazon](https://www.amazon.com/ELEGOO-Filament-Dimensional-Accuracy-Compatible/dp/B0BM72LMQH) |
| ELEGOO PLA Plus Filament 1.75mm Black 1KG | $16.99 | 1 | $16.99 | [Amazon](https://www.amazon.com/ELEGOO-Filament-Dimensional-Accuracy-Compatible/dp/B0BM721XHT) |
| MEGA 2560 PRO Embed | $17.99 | 1 | $17.99 | [Amazon](https://www.amazon.com/Songhe-MEGA-2560-ATMEGA2560-Pro-Pinheader/dp/B07TGF9VMQ) |
| BOJACK 3 Values 130 Pcs Solderless Breadboard | $9.99 | 1 | $9.99 | [Amazon](https://www.amazon.com/BOJACK-Values-Solderless-Breadboard-Flexible/dp/B08Y59P6D1) |
| 24 Values Electrolytic Capacitor Assortment Kit | $9.99 | 1 | $9.99 | [Amazon](https://www.amazon.com/ALLECIN-Electrolytic-Capacitor-Assortment-Kit/dp/B0C1VBXCQM) |
| QTEATAK 2Pcs AC 20A/125V 15A/250V DPST 4 Pins 2 Position Switch | $7.99 | 1 | $7.99 | [Amazon](https://www.amazon.com/Position-Rocker-Toggle-Switch-QTEATAK/dp/B08614BYNC) |
| 100Pcs 6x6x5 mm Miniature Micro Momentary Tactile Tact Touch Push Button | $5.99 | 1 | $5.99 | [Amazon](https://www.amazon.com/DAOKI-Miniature-Momentary-Tactile-Quality/dp/B01CGMP9GY) |
| JFtech 5 Pairs Deans T Plug Connector with 100mm 14 AWG Wire | $9.99 | 1 | $9.99 | [Amazon](https://www.amazon.com/gp/product/B09N8WLC2B) |
| HiLetgo ILI9341 2.8" SPI TFT LCD Display Touch Panel 240X320 | $16.39 | 1 | $16.39 | [Amazon](https://www.amazon.com/HiLetgo-240X320-Resolution-Display-ILI9341/dp/B073R7BH1B) |
| HiLetgo 10pcs 4 Channels IIC I2C Logic Level Converter | $7.49 | 1 | $7.49 | [Amazon](https://www.amazon.com/HiLetgo-Channels-Converter-Bi-Directional-3-3V-5V/dp/B07F7W91LC) |

**Total Amount: $330.33**
