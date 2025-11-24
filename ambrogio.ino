#define sca_dx  A0
#define mro_dx  A1
#define mro_sx  A2
#define sca_sx  A3
#define dx_avanti  10
#define dx_indietro  11
#define sx_avanti  8
#define sx_indietro 9 
#define velocita_dx  12
#define velocita_sx  6
                                          
#include <NewPing.h>

#define TRIGGER_PIN  4  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN   5    // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 500 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.


NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.


int Tempo_di_rotazione = 2500;
int Tempo_di_rivoluzione = 3500;
int Tempo_di_aggiustamento = 1500;
int Calcolo = 500;

void setup() {
 Serial.begin(9600);
 
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
 pinMode(sca_dx,INPUT);
 pinMode(sca_sx,INPUT);
 pinMode(mro_dx,INPUT);
 pinMode(mro_sx,INPUT);

}

void loop() {
  
        digitalWrite(sx_avanti,HIGH);
        digitalWrite(sx_indietro,LOW);
        digitalWrite(dx_avanti,HIGH);
        digitalWrite(dx_indietro,LOW);
        analogWrite(velocita_dx,255);
        analogWrite(velocita_sx,255);
  
/*
   if (sca_dx == 1){digitalWrite(sx_avanti,LOW);
                    digitalWrite(sx_indietro,HIGH);
                    digitalWrite(dx_avanti,LOW);
                    digitalWrite(dx_indietro,HIGH);
                    analogWrite(velocita_dx,155);
                    analogWrite(velocita_sx,255);
                    delay(Tempo_di_rotazione);}
                                                   

   if (sca_sx == 1){digitalWrite(sx_avanti,LOW);
                    digitalWrite(sx_indietro,HIGH);
                    digitalWrite(dx_avanti,LOW);
                    digitalWrite(dx_indietro,HIGH);
                    analogWrite(velocita_dx,255);
                    analogWrite(velocita_sx,155);
                    delay(Tempo_di_rotazione);}
                                                   

   if (sca_sx == 1 && sca_dx == 1){digitalWrite(sx_avanti,LOW);
                                   digitalWrite(sx_indietro,HIGH);
                                   digitalWrite(dx_avanti,HIGH);
                                   digitalWrite(dx_indietro,LOW);
                                   analogWrite(velocita_dx,255);
                                   analogWrite(velocita_sx,255);
                                   delay(Tempo_di_rotazione);
                                   digitalWrite(sx_avanti,LOW);
                                   digitalWrite(sx_indietro,HIGH);
                                   digitalWrite(dx_avanti,LOW);
                                   digitalWrite(dx_indietro,HIGH);
                                   analogWrite(velocita_dx,200);
                                   analogWrite(velocita_sx,200); 
                                   delay(Tempo_di_rivoluzione);}
                                   

   if (mro_dx == 1){digitalWrite(sx_avanti,LOW);
                    digitalWrite(sx_indietro,HIGH);
                    digitalWrite(dx_avanti,HIGH);
                    digitalWrite(dx_indietro,LOW);
                    analogWrite(velocita_dx,0);
                    analogWrite(velocita_sx,200);
                    delay(Tempo_di_aggiustamento);}  
                    

   if (mro_sx == 1){digitalWrite(sx_avanti,LOW);
                    digitalWrite(sx_indietro,HIGH);
                    digitalWrite(dx_avanti,HIGH);
                    digitalWrite(dx_indietro,LOW);
                    analogWrite(velocita_dx,200);
                    analogWrite(velocita_sx,0);
                    delay(Tempo_di_aggiustamento);} 


    if(sonar.ping_cm() <= 15){digitalWrite(sx_avanti,HIGH);
                              digitalWrite(sx_indietro,LOW);
                              digitalWrite(dx_avanti,HIGH);
                              digitalWrite(dx_indietro,LOW);
                              analogWrite(velocita_dx,0);
                              analogWrite(velocita_sx,0);
                              delay(Calcolo);
                              digitalWrite(sx_avanti,LOW);
                              digitalWrite(sx_indietro,HIGH);
                              digitalWrite(dx_avanti,HIGH);
                              digitalWrite(dx_indietro,LOW);
                              analogWrite(velocita_dx,200);
                              analogWrite(velocita_sx,200);
                              delay(Tempo_di_rotazione);
                              int distanza_1 = max(0,sonar.ping_cm());
                              delay(Calcolo);
                              digitalWrite(sx_avanti,HIGH);
                              digitalWrite(sx_indietro,LOW);
                              digitalWrite(dx_avanti,LOW);
                              digitalWrite(dx_indietro,HIGH);
                              analogWrite(velocita_dx,200);
                              analogWrite(velocita_sx,200);
                              delay(2*(Tempo_di_rotazione));
                              int distanza_2 = max(0,sonar.ping_cm());
                              delay(Calcolo);
                               if(distanza_2 >= distanza_1 || distanza_2 == 0 ){} 
                               else {digitalWrite(sx_avanti,LOW);
                                     digitalWrite(sx_indietro,HIGH);
                                     digitalWrite(dx_avanti,HIGH);
                                     digitalWrite(dx_indietro,LOW);
                                     analogWrite(velocita_dx,200);
                                     analogWrite(velocita_sx,200);
                                     delay(2*(Tempo_di_rotazione));
                                     }                
                                  }       
                                       */           
                           
  
  
  
   }
