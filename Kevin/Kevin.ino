/*
  Creado: Luis del Valle (ldelvalleh@programarfacil.com)
  https://programarfacil.com
*/holagefgdfgdfg

// Incluímos la librería para poder controlar el servo
#include <Servo.h>
// Declaramos la variable para controlar el servo
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
  servoMotorLd.attach(8);
  servoMotorLm.attach(2);
  servoMotorLu.attach(3);
  servoMotorRd.attach(4);
  servoMotorRm.attach(5);
  servoMotorRu.attach(6);
}
void loop() {
  //aqui ponemos todo recto
  servoMotorRu.write(90);
  servoMotorRm.write(70);
  servoMotorRd.write(70);
  servoMotorLd.write(80);
  servoMotorLm.write(90);
  servoMotorLu.write(90);
  delay(2000);
  //aqui avanzamos la pata derecha
  servoMotorLu.write(100);
  servoMotorLm.write(110);
  servoMotorRd.write(90);
  servoMotorLd.write(100);
  delay(1000);
    //aqui ponemos todo recto
  servoMotorRu.write(90);
  servoMotorRm.write(70);
  servoMotorRd.write(70);
  servoMotorLd.write(80);
  servoMotorLm.write(90);
  servoMotorLu.write(90);
  delay(2000);
    //aqui avanzamos la pata derecha
  servoMotorRu.write(80);
  servoMotorRm.write(50);
  servoMotorRd.write(50);
  servoMotorLd.write(60);
  delay(1000);
}
