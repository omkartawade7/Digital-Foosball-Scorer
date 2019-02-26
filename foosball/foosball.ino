#include <NewPing.h>
 
#define TRIGGER_PIN  16  
#define ECHO_PIN     5  
#define MAX_DISTANCE 200
#define a 4
#define b 0
#define c 2
#define d 14
#define e 12
#define f 13
#define g 15

int count = 0;

 
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 
 
void setup() {
  Serial.begin(115200);
   pinMode(a,OUTPUT);
   pinMode(b,OUTPUT);
   pinMode(c,OUTPUT);
   pinMode(d,OUTPUT);
   pinMode(e,OUTPUT);
   pinMode(f,OUTPUT);
   pinMode(g,OUTPUT);
}
 
void loop() {
  delay(50);                     
  //Serial.print("Ping: ");
  Serial.println(sonar.ping_cm());
  //Serial.println("cm");
  if (sonar.ping_cm()  < 5){
    count = count + 1;
    if (count > 9){
      count = 0;
      }
  }
    switch(count){
      case 0:{
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      Serial.println('0');
      delay(5000);
      break;
      }
      case 1 :{
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      Serial.println('1');
      delay(5000);
      break;
      }
      case 2 :{
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
      Serial.println('2');
      delay(5000);
      break;
      }
      case 3 :{
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
      Serial.println('3');
      delay(5000);
      break;
      }
      case 4 :{
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      Serial.println('4');
      delay(5000);
      break;
      }
      case 5 :{
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,HIGH);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      Serial.println('5');
      delay(5000);
      break;
      }
      case 6 :{
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      Serial.println('6');
      delay(5000);
      break;
      case 7 :
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      Serial.println('7');
      delay(5000);
      break;
      }
      case 8 :{
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      Serial.println('8');
      delay(5000);
      break;
      }
      case 9 :{
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      Serial.println('9');
      delay(5000);
      break;
      }
      
      
      }
    }


/*
 PIN MAP OF 7 SEGMENT DISPLAY


                                                      G  F  3.3V   A  B
                                                       |  |   |    |   |




                                                       |  |   |    |  |
                                                       E  F  3.3v  D  E

                                                       
 */
  
