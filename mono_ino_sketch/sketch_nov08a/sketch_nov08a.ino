#include <AFMotor.h>
#include <Stepper.h>
AF_Stepper monito(200, 2); 
//
//int data; // for incoming serial data
//
//
//void setup() {
//  Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
//  Serial.println("Finally!");
//}
//
//void loop() {
//  // send data only when you receive data:
//  while (Serial.available()) {
//    data = Serial.read();
//  }
//
//  if (data == '1') {
//    monito.setSpeed(100);
//    monito.step(5014,FORWARD,DOUBLE);
//  }
//  else {
//    monito.setSpeed(0);
//  }
//}


int data;

void setup (){
  Serial.begin(38400);
//  pinMode(LED_BUILTIN,OUTPUT);
//  digitalWrite(LED_BUILTIN,LOW);

  Serial.println("Hello");
}

void loop (){
  while (Serial.available()) {
    data = Serial.read();
  }

  if (data == '1') {
    monito.setSpeed(100);
    monito.step(5014,FORWARD,DOUBLE);
  }
  else {
    monito.setSpeed(0);
  }
}


//int cnt = 0 ;
//long spin=0;
//float num = 1.0 ;
//float speed1 = 150;
//char start ;
//bool prt = false;
//bool dirf = true;
//int flag =0;
//String data[2];
//void setup() {
//  // put your setup code here, to run once:
//Serial.begin(38400);
//#define stepPin 4
//#define dirPin 7
//#define enable 8
// pinMode(stepPin, OUTPUT);
// pinMode(dirPin, OUTPUT);
// pinMode(enable, OUTPUT);  
// digitalWrite(enable, HIGH); 
// digitalWrite(dirPin, HIGH);
//
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//
//  while(Serial.available()>0){
//   if (Serial.peek() == 'r') {
//      prt = true;  
//      Serial.read();
//      num = Serial.parseInt();
//      //Serial.println(num);
//   }
//    if (prt){
//
//    while(spin <200*32*num){   
//      move();
//      spin++;
//      if (Serial.peek() == 's') {
//          Serial.read();
//          digitalWrite(enable, HIGH); 
//          prt = false;
//          spin = 200*32*num;
//        }
//      if (Serial.peek() == 'd') {
//         Serial.read();
//         dirf = !dirf;
//         dir();
//         Serial.read();
//      }
//       if (Serial.peek() == 'v') {
//         Serial.read();
//         speed1 = Serial.parseInt(); 
//         Serial.read();
//      }
//     }
//    prt = false;
//    spin = 0;
//    //num = 1;
//    }
//
//
//  if (Serial.peek() == 's') {
//    Serial.read();
//    digitalWrite(enable, HIGH);
//    prt = false;
//    spin = 0;
//    num = 1;
//  }
//  if (Serial.peek() == 'd') {
//         dirf = !dirf;
//         dir();
//      }
//  if (Serial.peek() == 'v') {
//         Serial.read();
//         speed1 = Serial.parseInt(); 
//         Serial.read();
//      }
//}
//  /*
//      while (Serial.available() > 0) {
//        Serial.read();
//      }
//  */
//}
//
//
//void move () {
//  digitalWrite(enable, LOW);
//  digitalWrite(stepPin, HIGH);
//  delayMicroseconds(10);
//  digitalWrite(stepPin, LOW);
//  delayMicroseconds(speed1); 
//
//}
//void dir (){
//
//   if (dirf)
//      digitalWrite(dirPin, HIGH);
//  else
//     digitalWrite(dirPin, LOW);
//
//}
