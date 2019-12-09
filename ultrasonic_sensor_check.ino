 /* © Robocell,CCA *
 * This code is given during Autonomous robotics workshop organised  by Robocell,CCA on 24 & 25th August,2019. 
 * For details visit https://www.facebook.com/RobocellNITDgp/*/
 * functioning: measures distance of an object from bot using ultrasonic sensor and prints it in serial monitor*/


/*ultrasonic sensor pin connection*/
#define echo D7
#define trig D8

int duration;
int cm;
void setup() {
  
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  Serial.begin(9600); 
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////  ---------------   MAIN CODE   ------------------ ///////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {
  
   check();
   delay(500);
}
void check()                        /*This function measures the distance of obstacle from the U.S sensor*/
{
   digitalWrite(trig,LOW);
   delayMicroseconds(2);
   digitalWrite(trig,HIGH);
   delayMicroseconds(10);
   digitalWrite(trig,LOW);
   duration=pulseIn(echo,HIGH);     /*Calculates after how much time we are getting the response*/
   cm=(duration*0.034)/2;           /*speed of sound=340m/s i.e,0.034cm/microsec.*/
   Serial.print("Distance=");
   Serial.println(cm);
  }
