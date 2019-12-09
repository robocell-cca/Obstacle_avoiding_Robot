# Obstacle avoiding Robot

This file has a .ino file to be run on microcontroller boards like Arduino, NodeMCU.The robot would avoid obstacles in it's proximity of 15 cm, and turn right accordingly.

# Basic functioning of the robot: 

1. The robot checks the distance of a surface in front of it using an ultrasonic sensor. The idea is that as we know the speed of sound in air, and the sensor would give the long Timex we can calculate the distance between the surface and the ultrasonic sensor.

2. Once the distance is known, it is checked whether it is more than or equal to 15 cm. If it is, the robot moves forward. If it isn't, the robot stops and checks whether there is distance more than 15 cm on the robot's right, using a servo motor to change the direction of ultrasonic sensor.

3. If there is distance more than 15 cm on the right, then the robot turns 90° clockwise and moves forward, checking it's distance in the front.

# Real world applications:
This robot finds it's application in self driving vehicles. When used along with computer vision and machine learning, proximity can be approximated and helped to improve the accuracy of the vehicle and make the driving smoother.  
