#include <SoftwareSerial.h> 


SoftwareSerial BT(10,11); //TX, RX respetively
String state;// string to store incoming message from bluetooth
int r_motor_n = 2; //PWM control Right Motor +
int r_motor_p = 3; //PWM control Right Motor -
int l_motor_p = 4; //PWM control Left Motor -
int l_motor_n = 5; //PWM control Left Motor +
int pump = 6;
int mop = 7; 
int serv = 8;// for incoming serial
void setup()
{ BT.begin(9600);// bluetooth serial communication will happen on pin 10 and 11
 Serial.begin(9600); // serial communication to check the data on serial monitor
  pinMode(r_motor_n, OUTPUT); //Set control pins to be outputs
  pinMode(r_motor_p, OUTPUT);
  pinMode(l_motor_p, OUTPUT);
  pinMode(l_motor_n, OUTPUT);
  pinMode(pump, OUTPUT);
  pinMode(mop, OUTPUT);
  pinMode(serv, OUTPUT);

}
void loop()
{
  while (BT.available())
{  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable 
  char c = BT.read(); //Conduct a serial read
  state += c; //build the string- either "On" or "off"
 }  
  if (state.length() > 0)
  {
    Serial.println(state);
    
      if(state == "stop") 
        {
          digitalWrite(r_motor_n, LOW);
          digitalWrite(r_motor_p, LOW);
          digitalWrite(l_motor_p, LOW);
          digitalWrite(l_motor_n, LOW);
          Serial.println("Stop");
        }
      else if(state == "right")
        {
          digitalWrite(r_motor_n, LOW);
          digitalWrite(r_motor_p, HIGH);
          digitalWrite(l_motor_p, HIGH);
          digitalWrite(l_motor_n, LOW);
          Serial.println("RIGHT");
        }
     
      else if(state == "left")
        
        {
          digitalWrite(r_motor_n, HIGH);
          digitalWrite(r_motor_p, LOW);
          digitalWrite(l_motor_p, LOW);
          digitalWrite(l_motor_n, HIGH);
          Serial.println("left");
        }
       
      else if(state == "forward")
        
        {
          digitalWrite(r_motor_n, HIGH);
          digitalWrite(r_motor_p, LOW);
          digitalWrite(l_motor_p, HIGH);
          digitalWrite(l_motor_n, LOW);
          Serial.println("forward");
        }
      
      else if(state == "backward")
        
        {
          digitalWrite(r_motor_n, LOW);
          digitalWrite(r_motor_p, HIGH);
          digitalWrite(l_motor_p, LOW);
          digitalWrite(l_motor_n, HIGH);
          Serial.println("backward");
        }
      else if(state == "pump on") 
        {
        digitalWrite(pump, HIGH);
        Serial.println("pump on");
        }
      else if(state == "pump off")
        {
        digitalWrite(pump, LOW);
        Serial.println("pump off");
        }
      else if(state == "mope on")
        {
        digitalWrite(mop, HIGH); // mopper on
        Serial.println("mope on");
        }
      else if(state == "mope off")
        {
        digitalWrite(mop, LOW); // mopper off
        Serial.println("mope off");
        }
      else if(state == "wiper up")
        {
        digitalWrite(serv, HIGH);
        Serial.println("wiper up");
        }
      else if(state == "wiper down")
        {
        digitalWrite(serv, LOW);
        Serial.println("wiper down");
    }
    state ="";
  } 
}
