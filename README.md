Household accessories of today are evolving smarter, digitised and automated. Hence, it
is convenient for use and saves more time for people. Several robotic vacuum cleaners
are available in the market whereas only few ones are implemented for wet floor cleaning.
Robotic cleaners have taken major attention in Robotics research due to their effectiveness
in assisting humans. In using the robotic applications for floor cleaning at homes, hotels
offices, hospitals, etc., the robot makes floor cleaning process easy and fast. Utilizing of
wireless robotic cleaning system thereby reduces the human efforts and time spent on
home cleaning process.


Objectives of the Project:
The objective is to reduce the human efforts with respect floor cleaning, increase the
effectiveness of floor cleaning. It is to be achieved by the system through a mobile application. It reduces labour in every sector and avoid over all consumption of time and water.

Block Diagram of the Project:
![WhatsApp Image 2022-02-17 at 8 53 20 PM](https://user-images.githubusercontent.com/99895380/154513232-39264e94-a780-44dc-bb03-9c02f9ec218d.jpeg)


Hardware Used:

Arduino Uno basically a micro-controller which will collects and sends the input data depending on the code written in Arduino-IDE. The input data from the Bluetooth module
will be provided to Arduino Uno, which will activates the other parts of the module like
motor driver and Relay.


HC-05 is the Bluetooth module is used in our project. It will act as Communication
Bridge between Arduino UNO and Android Phone. It is a Serial Port Protocol Module,
which signifes that it will communicate with Arduino UNO via Serial communication.


L293D is a Motor Driver IC, It has 16 pins which are used to control a set of two DC motors
simultaneously in any direction. It is based on the concept of H-bridge. The direction of
voltage or current flow will be decided by the H-bridge.


HC-SR04 ultrasonic sensor, it uses sonar to determine distance to
an object like bats do. It offers excellent non-contact range detection with high accuracy
and stable readings in an easy-to-use package. It operation is not affected by sunlight or
black material like Sharp rangefnders are (although acoustically soft materials like cloth
can be diffcult to detect). It comes complete with ultrasonic transmitter and receiver
module.

![Screenshot (162)](https://user-images.githubusercontent.com/99895380/154809242-641c9ca1-cccf-4bef-a0a3-36ec4eace8c9.png)

DC motor used for the motion of the machine.
It converts the electrical energy to the mechanical energy. It is connected with the wheels
of the cleaner to move it in all directions. There by controls the complete movement of
the cleaner. We can't control the direction of rotation and speed of the DC motor directly.
To achieve this task L293D motor driver IC is used.

water pump is used to spill water on the 
oor and to keeps the mops moist for
proper cleaning of the 
floor. To avoid continuous 
ow of water a Relay is used. This will
be acts as a switch to control the 
flow of water from the water tank.

The TIP122 is a Darlington pair n-p-n transistor. It functions like a normal n-p-n transistor, but since it has a Darlington pair inside it has a good collector current rating of about 5A and a gain of about 1000. It can also withstand about 100V across its collector Emitter hence can be used to drive heavy loads.

![Screenshot (163)](https://user-images.githubusercontent.com/99895380/154809428-b3cd2c39-99af-4fa6-a3a7-db636eb4a222.png)

Software Used:

Arduino IDE is an open source software that is used for writing the code into the arduino
module. IDE stands for \Integrated Development Environment", where it can be used to
edit, compile and upload the code to the arduino device. It supports both C and C++
languages. The IDE environment mainly consists of two parts, editor and compiler where
it is used for writing the code and later used for compiling and uploading the code into
the given arduino module.

Android application is used to control all the robot actions such as movement of the
vehicle, mopping and water pump mechanism. The android application is developed by MIT App inventor (App developed by @manoj0108).


Result:
The Automatic Floor Cleaning Robot" helps the user by reducing physical efforts by
operating it through mobile application as shown in Figure and also saves time, water
and manpower.

![WhatsApp Image 2022-02-19 at 10 04 35 PM](https://user-images.githubusercontent.com/99895380/154809802-96756f19-6ed2-4f54-aa59-ad6cf8edace8.jpeg)

Water pump, rotating mops and moving wiper all together makes the 
oor cleaning action
perfectly as shown in Figure. The Mops rotates both in Clockwise and Anticlockwise
direction and wiper follows the wheels by that 
oor cleaning can be performed effciently.

![WhatsApp Image 2022-02-19 at 10 06 50 PM](https://user-images.githubusercontent.com/99895380/154809853-6e625dee-6284-466d-bedc-f40539410490.jpeg)

The obstacle avoidance mechanism is shown in Figure. The rechargeable batteries produce adequate features to the robot, thereby increasing its working span.

![WhatsApp Image 2022-02-19 at 10 08 42 PM](https://user-images.githubusercontent.com/99895380/154809947-9520dc55-accb-4b55-ba8d-f6daa8657060.jpeg)
