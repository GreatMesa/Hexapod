---
title: "Arduino Servo-Powered Hexapod"
author: "Chinedu Okpala"
description: "6-Legged RC-Controlled Robot"
created_at: "2025-3-01"
---
# Arduino Hexapod Journal
Total Hours Logged: 78 hrs

## Initial Reaserch 3/01/25 - 3/04/25 (5 Hours)

So when I initially started this project, I looked into different types of robots to do. I ended up deciding on the hexapod because it looked extremely cool. So during this time I looked into different type of hexapods such as commercial hexapods and hexapods that were custom built. In the end I had a list of things that I wanted to do in this project:

- Fully design the robot in Fusion 360.
- Design a custom PCB that would be used in the project.
- Develop a radio transmitter that allows me to remote control the hexapod.
- Develop inverse kinematic formulas to create walking gaits.

## Frame Construction 3/5/25 - 3/17/25 (16 Hours)

The first thing that I needed to do when designing the hexapod was the frame. As much as I didn't like it, starting off with the frame and the leg would give me a good idea on how big I wanted the hexapod to be, it would also give me an idea of how I was going to attach the servos to the robot. I decided to split up the frame of the hexapod into 4 seperate parts: the hexapod cover, the top frame, the body, and the bottom frame. I also made the servo attachment that I will be using to attach the actual servo to these projects. Throughout the next few paragraphs I will go much more into detail about each part that I constructed. However, I would construct the top cover at a later time so it will be in a later segment.

### Servo Cage 3/5/25 (2 Hours)

So the first thing that I modeled was the servo attachment that I would use to basically glue the servo to the other parts of the hexapod. I decided to name it a servo cage due to it being trapped, and effectionaly attached what looks like cage bars on the attachment for asthetic reasons.

![Screenshot 2025-06-19 001338](https://github.com/user-attachments/assets/db022db8-3614-410e-9ddf-5db1f0133c8c)
> Servo Cage without the servo motor.

![Screenshot 2025-06-19 001324](https://github.com/user-attachments/assets/f3ddc3be-4715-4a25-9577-2570ea7a6281)
> Servo Cage with the servo motor.

The holes that are present in the cage are where the M3 heated inserts will be placed. Then where the elevated segments are placed, the servos will take place. This elevation will ironically increase the amount of space due to the elevated pieces pushing the overall body down. Also, only some segments will need heated inserts on the cage and it will entirely depend on the orientation of the servos.

### Bearing Axle 3/6/25 (1 Hour)
The bearing axle wa also a preliminary thing to do as I wanted to reduce the amount of friction on the robot. Not really much to explain about this one since it was very simple os here besides me paramterizing it for the mr148zz servo and filleting some areas for higher durability / less space. This was the bearing axle:

![Screenshot 2025-06-20 010154](https://github.com/user-attachments/assets/c997701f-9529-47eb-b18e-9c8ae5b2b867)

### Body 3/7/25 - 3/10/25 (6 Hours)

For the body, I needed to make sure that certian values were parameterized. Later on when I am programming the inverse kinematic, I will need to make sure that these values are exact, otherwise I'm fried. I decided to make a irreugular octogonal shape for the hexapod. While this may seem very odd, there is a good reason for this. With a normal hexagon, there isn't really a way to only edit one dimension due to it being a regular polygon. After this deducment I decided to work on the actual sketch. I decided to make the height longer than the width due to more room for the legs to extend. This is the sketch that I created:

![Screenshot 2025-06-19 075205](https://github.com/user-attachments/assets/5f94e525-8ae9-4171-ad3d-bcff22e27eea)

As you can see, its very messy, but the parameters were there, and thats what I'm happy about. Next I needed to figure out how I would extrude it to make space for the cage. This is when I decided that the body should contain both the inner shell and the actual bottom frame. This would allow me to print it all in one chunk: increasing the stability and reducing the amount of heated inserts I need. This was the first version of the body that I would design:

![Screenshot 2025-06-19 105138](https://github.com/user-attachments/assets/9e0bcc48-06c6-4709-9d0c-12ad50f33c47)

However I had a problem, I realized if I were to put the top frame on the hexapod, it would be very difficult to insert the wires inside the body. I decided to make little rectangular pockets that the wires could be put. Overall, this process was very simple, and here is the second and currently final version of the hexapod's body:

![Screenshot 2025-06-19 105914](https://github.com/user-attachments/assets/26b7fc59-c570-48aa-822f-e4a5acb908c9)

Final thing about the body, I ended up putting the servo cages with the horn near the body. THis was due to the wires being oriented in the same direction, making it easier to input the wires in the body. This was the body with said servo cages:

![Screenshot 2025-06-19 110539](https://github.com/user-attachments/assets/c03f4a92-1c58-4614-91ee-d4ce90ef829b)

### Top Frame 3/11/25 (2 Hours)

For the next part of the frame, I decided to start working on the top fraame, or the main attachment to the body. Since I already had an Arduino Mega at the time, I knew that I wanted to make a little indent for it. Besides that, this would be a very simple task as all I needed to do was to basically make a little sandwich with the previous . However the indent turned out to be the hardest part as I had trouble finding the arduino model. I might just be dumb but how hard it is to find a model of a arduino mega, it also doesn't help that the arduino webside doesnt have it. Either way after this was done it was simple from here, this was the arduino model I ended up with:

![Screenshot 2025-06-19 191023](https://github.com/user-attachments/assets/8479761e-c095-4a2c-b2fa-841b8a816ebf)

### Bottom Frame 3/12/25 (1 Hour)

This was by far the most simple parts of the frame construction. Later on in assembely I knew I wanted a way to suspend the hexapod in air so it would be easy to work with. The way I decided was to use a stand that I would model later, plus a bottom that could easily attach to said stand. THe bulk of the time was spent reaserching how to make a honeycomb patter. This was the final model of the body frame:

![Screenshot 2025-06-19 191914](https://github.com/user-attachments/assets/5934e196-cf33-4543-887f-87a8b8871c2d)

### Top Cover 3/13/25 - 3/14/25 (4 Hours)

This was the final piece for the frame, and this is personally my favorite. The goal of this part was to nicely attach to the top frame while also being a kind of shell for the arduino. Also I wanted to be able to be able to put all the servo wires neatly. I decided to make a outer layer with the same octogonal dimensions of the frame. After this I had trouble designing the slanted part due to it basically being two plates that had different y axises and were connected by slants. After some digging I realized I needed to make a inner layer to be able to loft the outer and inner plates. After that it was simple from there. I thought I would have trouble making cutouts of the slanted pieces but I realized that it worked like any normal face. Also I added a honycomb pattern to the top part since it looks cool and I could eventually attach something to it. This is a picture of the final model:

![Screenshot 2025-06-19 194405](https://github.com/user-attachments/assets/1280b52e-fcf5-454c-abec-c04b2543c94d)

## Leg Construction 3/15/25 - 3/26/25 (29 Hours)

### Leg Design Reaserch 3/15/25 - 3/16/25 (6 Hours)

For the leg, there is a lot more complexities. Something that is important is defining the total length of the legs alongside the 3 components of the legs. The 3 segments of the leg are the Coxa, Femur, and Tibia. Someting that I learnt was that each part of the leg is directly responsible for something:

- The **Coxa** is responsible for any horizontal movement of the leg.
- The **Femur** is responsible for any vertical movements of the robot.
- The **Tibia** is responsible for any extensional / z axis movements of the robot.

Something important to mention is that depending on each task, the lengths of the robot should match that. That means the Coxa should be the smallest out of the 3 segments due to the horizontal limit actually being more affected by the Tibia, meaning that segment should be the longest.  The femur is somewhere in the middle as you want to have a good vertical range without loosing the mobility of a small tibia. 

### Coxa Construction 3/17/25 - 3/18/25 (6 Hours)

Starting off with the Coxa construction, I needed to both extend the brace outside the frame, but to also house the femur servo. The first part I would start with was the extension part. It was fairly simple as all I needed to do was to make sure the end of it was outside the frame. The brace was also fairly simple, all I needed to do was to make sure it fitted the cage insdie of it. This was the model I came up with:

![Screenshot 2025-06-20 094410](https://github.com/user-attachments/assets/92a69525-6676-4b27-b688-609a78afba77)

Also I added hubcaps so that I could tune the friction since I saw people having problems with overcorrection with the PID loop of the servo.

### Femur Construction 3/19/25 - 3/20/25 (7 Hours)

Now onto the Femur. Something important that I needed to do was to make the leg curved. I realized that if I wanted to save space on the robot, a curved Femur would allow me to bend the legs much more into the frame than normal. For the length of the Femur I decided to make it 100 cm due to it being a nice number and it also was a good length compared to what I wanted the tibia to be. Also I figured out how to make the curved Femur by making a curved tangent spline. One final thing is that I made indents for the horn side and bearing side, while making a small brace to connect the sides. Here is the femur model.

![Screenshot 2025-06-20 115004](https://github.com/user-attachments/assets/9ebc9b82-8ec3-4b1d-af54-4dcd42302e33)

### Tibia Construction 3/21/25 - 3/25/25 (10 Hours)

This took by far, by far, the most amount of time and was easily the most annoying part of the leg. The problem arrises when I wanted to make the leg curved. Unlike the femur sketch, there is a actual angle between the beginning and end point of the tibia. There are a multitude of reasons why a curved leg is better, with shock absorbtion and higher stability topping the list. However actually making the curved leg with a angle that needs to be known for the inverse kinematics was quite diabolical. Turns out I basically needed to make multiple circles to draw out each part of the tibia, something that took me a long time to realize. However, after this it was fairly simple from there as both the complex geometry of the stub and the tibia brace were fairly straight foward. Here is the sketch of and the acutal tibia:

![Screenshot 2025-06-20 120228](https://github.com/user-attachments/assets/f00a0d9c-2f21-4319-a73e-eb9dd1d79586)
>Sketch


![Screenshot 2025-06-20 120419](https://github.com/user-attachments/assets/d7103a64-fbae-42ad-9ae6-9a4a50e15acd)
>Actual Tibia

## Assembely 3/26/25 (4 Hours)

So, turns out when I was origionally doing this (since cadding was a new experience), I had everything in one janky file. I realized in order to get a better model of this hexapod and attach all the legs I needed to split every component up and then put them back together. Needless to say but this took a good amount of time to put together, but it looks absolutely amazing and I am super proud of this model. This is the final model in fusion 360:

![Hexapod](https://github.com/user-attachments/assets/4e7dd108-573c-4d4c-a193-5c7829b00de1)

## Hexapod PCB Design V1 (25 Hours)

### Initial Reaserch 3/30/25 - 3/31/25 (4 Hours)
For the PCB of the hexapod, I originally wanted to make a shield for an Arduino Mega. This would allow me to just shlap it on the arduino mega and somewhat be done with it. After doing some reaserch, the only electronics I wanted was the communication NRF, and a stable power supply. However in the future I want to make the PCB an actual pcb. But lets see how that goes.

### Schematic Design 4/7/25 - 4/11/25 (9 Hours)

Throughout this week I decided to start and finish the schematic. This was also my first time doing schematics so it took time learning KiCad in general. Once I got a hang of it, I was chilling. Here is a picture o the schematic that I came up with and I will just write some more notes about spesific things:

![Screenshot 2025-06-20 205454](https://github.com/user-attachments/assets/1ab15c89-3e00-4f12-ae7b-2f790ca99c39)

- The reason for all the pins is that there isn't a shield pin modelfor the arduino so I sliced it into bits.
- The NRF2401 needs a capacitor for a stable power supply.
- The power supply also has 2 capacitors for a overall more stable power supply.
- The GPIO blocks were going to be used for stuff like other servos and LEDs.

### PCB Routing (12 Hours)

As this was my first time routing, this was a humbling experience to say the least. Due to me at the time wanting a lot of general purpose blocks and me originally using 1 layer (pretty dumb ik ik), it took a bit to get it right. But as soon as all the difficult cases were done it was good from there, especially as soon as I knew what I was doing. This was the final routing of the shield:

![Screenshot 2025-06-20 210252](https://github.com/user-attachments/assets/0f466896-050e-4a4c-86e3-953e8f7525b2)
