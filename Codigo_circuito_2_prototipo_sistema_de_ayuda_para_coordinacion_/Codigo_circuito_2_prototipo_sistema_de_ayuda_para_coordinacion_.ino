
 /*
Programa desarrollado por Tomas Alejandro Jaramilllo Rodriguez
Programa utilizado en el trabajo de residencias profecionales "CREACION Y ADAPTACION DE EQUIPO DEL TIPO MULTISENSORIAL PARA EL APOYO EN EL DESARROLLO INTEGRAL DE NINOS CON BARRERAS DE APRENDIZAJE"



CODIGO PARA EL SONIDO DEL PROTOTIPO "SISTEMA DE AYUDA PARA COORDINACION MOTRIZ Y AUDITIVA"
*/
 
 
 // seccion de SD

 #include <SD.h>                           //include SD module library
#include <TMRpcm.h>                       //include speaker control library

#define SD_ChipSelectPin 10               //define CS pin


TMRpcm tmrpcm;                            //crete an object for speaker library
 
 
 
 
 


 //Asignacion de los pines de Entrada 
  int uno=2;
  int dos=3;
  int tres=4;
  int cuatro=5;
  int nor=6;
  int sil=7;



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

 

  //Establecimiento de los pines como Salidas 
   

  //Establecimiento de los pines como entrada
    pinMode(uno, INPUT);
    pinMode(dos, INPUT);
    pinMode(tres, INPUT);
    pinMode(cuatro, INPUT);
    pinMode (nor,INPUT);
    pinMode (sil,INPUT);
   


}

void loop(){
 if( (digitalRead(nor))== HIGH) 
       {
         
    normal();
 
   
        }  

 else if ( (digitalRead(sil))== HIGH) 
 {
    
  silava();
  
  
 }



}


void normal () {

  if( (digitalRead(uno))== HIGH) 
       {
    derecha();
 
   
        }  

 else if ( (digitalRead(dos))== HIGH) 
 {
  izquierda();
  
  
 }

 else if ( (digitalRead(tres))== HIGH)
 {
     arriva();
  
   
 }

 else if ( (digitalRead(cuatro))== HIGH)
 {
     abajo();
   
  
 }



}


void silava () {

   
  if( (digitalRead(uno))== HIGH) 
       {
    sderecha();
 
   
        }  

 else if ( (digitalRead(dos))== HIGH) 
 {
  sizquierda();
  
  
 }

 else if ( (digitalRead(tres))== HIGH)
 {
     sarriva();
  
   
 }

 else if ( (digitalRead(cuatro))== HIGH)
 {
     sabajo();
   
  
 }

}




void arriva ()  {

  tmrpcm.setVolume(5);                    //0 to 7. Set volume level
 tmrpcm.play("arriva.wav");         //the sound file "1" will play each time the arduino powers up, or is reset
   delay(5000); 

}

void abajo ()  {

 tmrpcm.setVolume(5);                    //0 to 7. Set volume level
 tmrpcm.play("abajo.wav");         //the sound file "1" will play each time the arduino powers up, or is reset
   delay(5000); 

}

void derecha ()  {

 tmrpcm.setVolume(5);                    //0 to 7. Set volume level
 tmrpcm.play("derecha.wav");         //the sound file "1" will play each time the arduino powers up, or is reset
   delay(5000); 

}

void izquierda()  {

 tmrpcm.setVolume(5);                    //0 to 7. Set volume level
 tmrpcm.play("izq.wav");         //the sound file "1" will play each time the arduino powers up, or is reset
   delay(5000); 
   
}








void sarriva ()  {

  tmrpcm.setVolume(5);                    //0 to 7. Set volume level
 tmrpcm.play("sarr.wav");         //the sound file "1" will play each time the arduino powers up, or is reset
   delay(5000); 

}

void sabajo ()  {

 tmrpcm.setVolume(5);                    //0 to 7. Set volume level
 tmrpcm.play("saba.wav");         //the sound file "1" will play each time the arduino powers up, or is reset
   delay(5000); 

}

void sderecha ()  {

 tmrpcm.setVolume(5);                    //0 to 7. Set volume level
 tmrpcm.play("sder.wav");         //the sound file "1" will play each time the arduino powers up, or is reset
   delay(5000); 

}

void sizquierda()  {

 tmrpcm.setVolume(5);                    //0 to 7. Set volume level
 tmrpcm.play("sizq.wav");         //the sound file "1" will play each time the arduino powers up, or is reset
   delay(5000); 
   
}
