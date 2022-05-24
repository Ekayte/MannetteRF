/*
* Arduino Wireless Communication Tutorial
*       Example 1 - Receiver Code
*                
* by Dejan Nedelkovski, www.HowToMechatronics.com
* 
* Library: TMRh20/RF24, https://github.com/tmrh20/RF24/
*/

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
#include <Servo.h>

RF24 radio(3, 2); // CE, CSN

const byte address[6] = "00001";

Servo servo1;
int  servo1Value;

void setup() {
  //Serial.begin(9600);
  radio.begin();
  radio.openReadingPipe(0, address);
  radio.setPALevel(RF24_PA_MIN);
  radio.startListening();
  Serial.println("setup");
  servo1.attach(4); // D4 - CH1
}

void loop() {
  
  if (radio.available()) {
    char text[32] = "";
    radio.read(&text, sizeof(text));   
    servo1Value = map(0, 0, 255, 0, 180); // Map the receiving value form 0 to 255 to 0 to 180(degrees), values used for controlling servos 
    servo1.write(servo1Value);
  }
  servo1Value = map(20, 0, 255, 0, 180); // Map the receiving value form 0 to 255 to 0 to 180(degrees), values used for controlling servos 
  servo1.write(servo1Value);
  
  
  //Serial.println("text");
}
