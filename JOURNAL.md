---
title: "Arduino Servo-Powered Hexapod"
author: "Chinedu Okpala"
description: "6-Legged RC-Controlled Robot"
created_at: "2025-2-01"
---
# Arduino Hexapod Journal
Total Hours Logged: 100 hrs

## Initial Reaserch (2 Hours)

So when I initially started this project, I looked into different types of robots to do. I ended up deciding on the hexapod because it looked extremely cool. So during this time I looked into different type of hexapods such as commercial hexapods and hexapods that were custom built. In the end I had a list of things that I wanted to do in this project:

- Fully design the robot in Fusion 360.
- Design a custom PCB that would be used in the project.
- Develop a radio transmitter that allows me to remote control the hexapod.
- Develop inverse kinematic formulas to create walking gaits.

## Frame Construction 2/8/25 - 2/15/25 (9 Hours)

The first thing that I needed to do when designing the hexapod was the frame. As much as I didn't like it, starting off with the frame and the leg would give me a good idea on how big I wanted the hexapod to be, it would also give me an idea of how I was going to attach the servos to the robot. I decided to split up the frame of the hexapod into 4 seperate parts: the hexapod cover, the top frame, the body, and the bottom frame. I also made the servo attachment that I will be using to attach the actual servo to these projects. Throughout the next few paragraphs I will go much more into detail about each part that I constructed. However, I would construct the top cover at a later time so it will be in a later segment.

### Servo Cage (1 Hour)

So the first thing that I modeled was the servo attachment that I would use to basically glue the servo to the other parts of the hexapod. I decided to name it a servo cage due to it being trapped, and effectionaly attached what looks like cage bars on the attachment for asthetic reasons.

![Screenshot 2025-06-19 001338](https://github.com/user-attachments/assets/db022db8-3614-410e-9ddf-5db1f0133c8c)
> Servo Cage without the servo motor.

![Screenshot 2025-06-19 001324](https://github.com/user-attachments/assets/f3ddc3be-4715-4a25-9577-2570ea7a6281)
> Servo Cage with the servo motor.

The holes that are present in the cage are where the M3 heated inserts will be placed. Then where the elevated segments are placed, the servos will take place. This elevation will ironically increase the amount of space due to the elevated pieces pushing the overall body down. Also, only some segments will need heated inserts on the cage and it will entirely depend on the orientation of the servos.

### Bearing Axle (0.5 Hours)
The bearing axle wa also a preliminary thing to do as I wanted to reduce the amount of friction on the robot. Not really much to explain about this one since it was very simple os here besides me paramterizing it for the mr148zz servo and filleting some areas for higher durability / less space. This was the bearing axle:

![Screenshot 2025-06-20 010154](https://github.com/user-attachments/assets/c997701f-9529-47eb-b18e-9c8ae5b2b867)

### Body (5 Hours)

For the body, I needed to make sure that certian values were parameterized. Later on when I am programming the inverse kinematic, I will need to make sure that these values are exact, otherwise I'm fried. I decided to make a irreugular octogonal shape for the hexapod. While this may seem very odd, there is a good reason for this. With a normal hexagon, there isn't really a way to only edit one dimension due to it being a regular polygon. After this deducment I decided to work on the actual sketch. I decided to make the height longer than the width due to more room for the legs to extend. This is the sketch that I created:

![Screenshot 2025-06-19 075205](https://github.com/user-attachments/assets/5f94e525-8ae9-4171-ad3d-bcff22e27eea)

As you can see, its very messy, but the parameters were there, and thats what I'm happy about. Next I needed to figure out how I would extrude it to make space for the cage. This is when I decided that the body should contain both the inner shell and the actual bottom frame. This would allow me to print it all in one chunk: increasing the stability and reducing the amount of heated inserts I need. This was the first version of the body that I would design:

![Screenshot 2025-06-19 105138](https://github.com/user-attachments/assets/9e0bcc48-06c6-4709-9d0c-12ad50f33c47)

However I had a problem, I realized if I were to put the top frame on the hexapod, it would be very difficult to insert the wires inside the body. I decided to make little rectangular pockets that the wires could be put. Overall, this process was very simple, and here is the second and currently final version of the hexapod's body:

![Screenshot 2025-06-19 105914](https://github.com/user-attachments/assets/26b7fc59-c570-48aa-822f-e4a5acb908c9)

Final thing about the body, I ended up putting the servo cages with the horn near the body. THis was due to the wires being oriented in the same direction, making it easier to input the wires in the body. This was the body with said servo cages:

![Screenshot 2025-06-19 110539](https://github.com/user-attachments/assets/c03f4a92-1c58-4614-91ee-d4ce90ef829b)

### Top Frame (1.5 Hours)

For the next part of the frame, I decided to start working on the top fraame, or the main attachment to the body. Since I already had an Arduino Mega at the time, I knew that I wanted to make a little indent for it. Besides that, this would be a very simple task as all I needed to do was to basically make a little sandwich with the previous . However the indent turned out to be the hardest part as I had trouble finding the arduino model. I might just be dumb but how hard it is to find a model of a arduino mega, it also doesn't help that the arduino webside doesnt have it. Either way after this was done it was simple from here, this was the arduino model I ended up with:

![Screenshot 2025-06-19 191023](https://github.com/user-attachments/assets/8479761e-c095-4a2c-b2fa-841b8a816ebf)

### Bottom Frame (0.5 Hours)

This was by far the most simple parts of the frame construction. Later on in assembely I knew I wanted a way to suspend the hexapod in air so it would be easy to work with. The way I decided was to use a stand that I would model later, plus a bottom that could easily attach to said stand. THe bulk of the time was spent reaserching how to make a honeycomb patter. This was the final model of the body frame:

![Screenshot 2025-06-19 191914](https://github.com/user-attachments/assets/5934e196-cf33-4543-887f-87a8b8871c2d)

### Top Cover (2.5 Hours)

This was the final piece for the frame, and this is personally my favorite. The goal of this part was to nicely attach to the top frame while also being a kind of shell for the arduino. Also I wanted to be able to be able to put all the servo wires neatly. I decided to make a outer layer with the same octogonal dimensions of the frame. After this I had trouble designing the slanted part due to it basically being two plates that had different y axises and were connected by slants. After some digging I realized I needed to make a inner layer to be able to loft the outer and inner plates. After that it was simple from there. I thought I would have trouble making cutouts of the slanted pieces but I realized that it worked like any normal face. Also I added a honycomb pattern to the top part since it looks cool and I could eventually attach something to it. This is a picture of the final model:

![Screenshot 2025-06-19 194405](https://github.com/user-attachments/assets/1280b52e-fcf5-454c-abec-c04b2543c94d)

