#define bouton_1 9
#define bouton_2 8
#define bouton_3 2
#define bouton_4 3

#define switch_1 7
#define switch_2 4

#define potar_1 A7
#define potar_2 A6

#define joystick_11 A0
#define joystick_12 A1 

#define joystick_21 A2
#define joystick_22 A3

#define accelero_1 A4
#define accelero_2 A5


void setup() {
  Serial.begin(9600);
  pinMode(bouton_1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  Serial.print("bouton_1 : ");
  Serial.println(digitalRead(bouton_1));
  Serial.print("bouton_2 : ");
  Serial.println(digitalRead(bouton_2));
  Serial.print("bouton_3 : ");
  Serial.println(digitalRead(bouton_3));
  Serial.print("bouton_4 : ");
  Serial.println(digitalRead(bouton_4));

  Serial.print("switch_1 : ");
  Serial.println(digitalRead(switch_1));
  Serial.print("switch_2 : ");
  Serial.println(digitalRead(switch_2));

  Serial.print("potar_1 : ");
  Serial.println(analogRead(potar_1));
 
  Serial.print("potar_2 : ");
  Serial.println(analogRead(potar_2));

  Serial.print("joystick_11 : ");
  Serial.println(analogRead(joystick_11));
  
  Serial.print("joystick_12 : ");
  Serial.println(analogRead(joystick_12));

  Serial.print("joystick_21 : ");
  Serial.println(analogRead(joystick_21));
  Serial.print("joystick_21 : ");
  Serial.println(analogRead(joystick_22));
*/
  Serial.print("accelero_1 : ");
  Serial.println(analogRead(accelero_1));

   Serial.print("accelero_2 : ");
  Serial.println(analogRead(accelero_2));
  
}
