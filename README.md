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
