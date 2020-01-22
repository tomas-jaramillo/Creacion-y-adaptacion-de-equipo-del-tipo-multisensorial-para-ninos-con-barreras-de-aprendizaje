
  /*
Programa desarrollado por Tomas Alejandro Jaramilllo Rodriguez
Programa utilizado en el trabajo de residencias profecionales "CREACION Y ADAPTACION DE EQUIPO DEL TIPO MULTISENSORIAL PARA EL APOYO EN EL DESARROLLO INTEGRAL DE NINOS CON BARRERAS DE APRENDIZAJE"



CODIGO PARA EL SONIDO DEL PROTOTIPO "SISTEMA DE AYUDA VISUAL Y AUDITIVA"
*/
 
 
 
 
 // seccion de SD

 #include <SD.h>                           //include SD module library
#include <TMRpcm.h>                       //include speaker control library

#define SD_ChipSelectPin 10               //define CS pin


TMRpcm tmrpcm;                            //crete an object for speaker library
 
 
 
 
 



 //Asignacion de los pines de Entrada  (son pines para recibir senales del otro arduino
  int uno=6;
  int dos=7;
  int tres=8;



void setup() {



  tmrpcm.speakerPin = 9;                  //define speaker pin. 
                                          //you must use pin 9 of the Arduino Uno and Nano
                                          //the library is using this pin
 
  if (!SD.begin(SD_ChipSelectPin)) {      //see if the card is present and can be initialized
    
    return;                               //don't do anything more if not
  }
  
 tmrpcm.setVolume(5);                    //0 to 7. Set volume level
 tmrpcm.play("inicio.wav");         //the sound file "1" will play each time the arduino powers up, or is reset


  //Asignacion de los pines de Salida 

 


  //Establecimiento de los pines como entrada
    pinMode(uno, INPUT);
    pinMode(dos, INPUT);
    pinMode(tres, INPUT);
   


}

void loop(){
  if( (digitalRead(uno)& digitalRead(dos)& digitalRead(tres))== HIGH) //PIDO LECTURA DE COMO ESTA EL SENSOR
       {
    rojo();

   
        }  

 else if ( (digitalRead(uno)& digitalRead(dos)& !digitalRead(tres))== HIGH) 
 {
  azul();
 
  
 }

 else if ( (digitalRead(uno)& !digitalRead(dos)& digitalRead(tres))== HIGH)
 {
     verde();
  
   
 }

 else if ( (digitalRead(uno)& !digitalRead(dos)& !digitalRead(tres))== HIGH)
 {
     amarillo();
  
  
 }

}




void rojo ()  {

 
  tmrpcm.setVolume(5);                    //0 to 7. Set volume level
 tmrpcm.play("rojo.wav");         //the sound file "1" will play each time the arduino powers up, or is reset
   delay(7000); 

}

void azul ()  {

 tmrpcm.setVolume(5);                    //0 to 7. Set volume level
 tmrpcm.play("azul.wav");         //the sound file "1" will play each time the arduino powers up, or is reset
   delay(7000); 

}

void verde ()  {

 tmrpcm.setVolume(5);                    //0 to 7. Set volume level
 tmrpcm.play("verde.wav");         //the sound file "1" will play each time the arduino powers up, or is reset
   delay(7000); 

}

void amarillo ()  {

 tmrpcm.setVolume(5);                    //0 to 7. Set volume level
 tmrpcm.play("amarillo.wav");         //the sound file "1" will play each time the arduino powers up, or is reset
   delay(7000); 
}
