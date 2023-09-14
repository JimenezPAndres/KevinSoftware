/*
  Creado: Luis del Valle (ldelvalleh@programarfacil.com)
  https://programarfacil.com
*/

// Incluímos la librería para poder controlar el servo
#include <Servo.h>
// Declaramos la variable para controlar el servo
//L=Left
//R= Right
// d= down   m=medium   u=up
Servo servoMotorLd;
Servo servoMotorLm;
Servo servoMotorLu;
Servo servoMotorRd;
Servo servoMotorRm;
Servo servoMotorRu;
 
void setup() {
  // Iniciamos el monitor serie para mostrar el resultado
  Serial.begin(9600);
  // Iniciamos el servo para que empiece a trabajar con el pin 9
  servoMotorLd.attach(2);
  servoMotorLm.attach(3);
  servoMotorLu.attach(4);
  servoMotorRd.attach(5);
  servoMotorRm.attach(6);
  servoMotorRu.attach(7);
}
  void loop(){
  //aqui ponemos todo recto
  servoMotorRu.write(90);
  servoMotorRm.write(90);
  servoMotorRd.write(70);
  servoMotorLd.write(40);
  servoMotorLm.write(75);
  servoMotorLu.write(80);
  delay(2000);
  //inclinamos 
  servoMotorRd.write(70);
   servoMotorLd.write(10);
   delay(1000);
//avanza el lado derecho
  servoMotorRm.write(60);  
  servoMotorRu.write(60);
  servoMotorLm.write(45);
  servoMotorLu.write(50);
    delay(2000);
  servoMotorLd.write(40);
    delay(2000);
  servoMotorLd.write(50);
  servoMotorRd.write(100);
    delay(2000);
  servoMotorRu.write(110);
  servoMotorLu.write(110);

    delay(2000);
}
