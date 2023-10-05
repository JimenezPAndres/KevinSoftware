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
Servo servoMotorLm; //Tiene el cero para atrás.
Servo servoMotorLu;
Servo servoMotorRd;
Servo servoMotorRm; //Tiene el cero para adelante.
Servo servoMotorRu; //Tiene el cero en el lado contrario.


//El de la cinta es el lado izquierdo.


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

//Funciones de adapter y compensacion
//Derecha
void Ru(int angle){
  servoMotorRu.write(90-angle);
}
void Rm(int angle){
  servoMotorRm.write(70+angle);
}
void Rd(int angle){
  servoMotorRd.write(85+angle);
}
//Izquierda
void Lu(int angle){
  servoMotorLu.write(90-5+angle);
}
void Lm(int angle){
  servoMotorLm.write(90-angle);
}
void Ld(int angle){
  servoMotorLd.write(85-angle);
}



void Rug(int angle,int milisecond){
  if(milisecond<100){return;}
  for (int i = 0; i <= milisecond; i=i+100) {
  servoMotorRu.write(90-angle*(i/milisecond));
  delay(100);}
}
void Rmg(int angle,int milisecond){
  if(milisecond<100){return;}
  for (int i = 0; i <= milisecond; i=i+100) {
  servoMotorRm.write(70+angle*(i/milisecond));
  delay(100);}
}
void Rdg(int angle,int milisecond){
  if(milisecond<100){return;}
  for (int i = 0; i <= milisecond; i=i+100) {
  servoMotorRd.write(85+angle*(i/milisecond));
  delay(100);}
}
//Izquierda
void Lug(int angle,int milisecond){
  if(milisecond<100){return;}
  for (int i = 0; i <= milisecond; i=i+100) {
  servoMotorLu.write(90-5+angle*(i/milisecond));
  delay(100);}
}
void Lmg(int angle,int milisecond){
  for (int i = 0; i <= milisecond; i=i+100) {
  servoMotorLm.write(90-angle*(i/milisecond));
  delay(100);}
}
void Ldg(int angle,int milisecond,int tmp){
  if(milisecond<100){return;}
  for (int i = 0; i <= milisecond; i=i+100) {
  servoMotorLd.write(85-angle*(i/milisecond));
  delay(100);}
}


void zero()
{
  //aqui ponemos todo recto
  Lu(0);
  Ru(0);
  Lm(0);
  Rm(0);
  Rd(0);
  Ld(0);

} 
void avanzarL1(){
  Ld(65);
  delay(100);
  Rd(20);
  delay(500);
  Rd(35);

  delay(100);
  Lu(80);
  Lm(-45);
  
  delay(300);
  Ld(35);
  Rd(30);

  delay(100);
  Rd(25);
  Ld(0);
}
void avanzarL2(){
  Ru(40);
  Rm(15);

}
  void loop(){
    zero();
    delay(3000);
 //   avanzarL1();
 //   delay(2000);
  //  avanzarL2();
    delay(2000);
//   //inclinamos 
//   Rd(70);
//    Ld(60);
//    delay(1000);
// //avanza el lado derecho
//   Rm(180);  
//   Ru(60);
//   Lm(45);
//   Lu(50);
//     delay(2000);
//   Ld(40);
//     delay(2000);
//   Ld(50);
//   Rd(100);
//     delay(2000);
//   Ru(110);
//   Lu(110);

//     delay(1000);
}
