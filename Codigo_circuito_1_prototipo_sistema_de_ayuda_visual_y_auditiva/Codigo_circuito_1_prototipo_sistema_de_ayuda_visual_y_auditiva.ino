

#include <SPI.h>      // incluye libreria bus SPI
#include <MFRC522.h>      // incluye libreria especifica para MFRC522

#define RST_PIN  9      // constante para referenciar pin de reset  // originalmente tenia el pin 9 pero para poder usar ese pin lo mande al 7 y jalo 
#define SS_PIN  10      // constante para referenciar pin de slave select


  
MFRC522 mfrc522(SS_PIN, RST_PIN); // crea objeto mfrc522 enviando pines de slave select y reset
int ledR=2;
int ledV=3;
int ledA=4;
int ledN=5;
byte LecturaUID[4];         // crea array para almacenar el UID leido
byte Usuario1[4]= {0xEA, 0x1A, 0x5B, 0x1A} ;    // UID de tarjeta 
byte Usuario2[4]= {0x5B, 0x6E, 0xD1, 0x22} ;    // UID de tarjeta 
byte Usuario3[4]= {0x8A, 0xD6, 0x7E, 0x19} ;    // UID de tarjeta
byte Usuario4[4]= {0x3A, 0xF4, 0x82, 0x19} ;    // UID de tarjeta

int uno=6;
int dos=7;
int tres=8;

  

void setup() {
  
  pinMode (ledR,OUTPUT);
  pinMode (ledV,OUTPUT);
  pinMode (ledA,OUTPUT);
   pinMode (ledN,OUTPUT);


pinMode (uno,OUTPUT);
  pinMode (dos,OUTPUT);
  pinMode (tres,OUTPUT);

   
digitalWrite(ledR, HIGH);
digitalWrite(ledV,  HIGH);
digitalWrite(ledA,  HIGH);
digitalWrite(ledN,  HIGH);
   
  Serial.begin(9600);     // inicializa comunicacion por monitor serie a 9600 bps
  SPI.begin();        // inicializa bus SPI
  mfrc522.PCD_Init();     // inicializa modulo lector
  Serial.println("Listo");    // Muestra texto Listo
}

void loop() {
  digitalWrite(tres, HIGH);
  digitalWrite(dos, HIGH);
  digitalWrite(uno, HIGH);
  
  
  
  if ( ! mfrc522.PICC_IsNewCardPresent())   // si no hay una tarjeta presente
    return;           // retorna al loop esperando por una tarjeta
  
  if ( ! mfrc522.PICC_ReadCardSerial())     // si no puede obtener datos de la tarjeta
    return;           // retorna al loop esperando por otra tarjeta
    
    Serial.print("UID:");       // muestra texto UID:
    for (byte i = 0; i < mfrc522.uid.size; i++) { // bucle recorre de a un byte por vez el UID
      if (mfrc522.uid.uidByte[i] < 0x10){   // si el byte leido es menor a 0x10
        Serial.print(" 0");       // imprime espacio en blanco y numero cero
        }
        else{           // sino
          Serial.print(" ");        // imprime un espacio en blanco
          }
          Serial.print(mfrc522.uid.uidByte[i], HEX);    // imprime el byte del UID leido en hexadecimal
          LecturaUID[i]=mfrc522.uid.uidByte[i];     // almacena en array el byte del UID leido      
          }
          
          Serial.print("\t");         // imprime un espacio de tabulacion             
                    
          if(comparaUID(LecturaUID, Usuario1))    // llama a funcion comparaUID con Usuario1
             {
             rojo();
             }
          else if(comparaUID(LecturaUID, Usuario2)) // llama a funcion comparaUID con Usuario2
            {
             verde();
             }
          else if(comparaUID(LecturaUID, Usuario3)) // llama a funcion comparaUID con Usuario2
            {
             amarillo();
             }

              else if(comparaUID(LecturaUID, Usuario4)) // llama a funcion comparaUID con Usuario2
            {
             azul();
             }
           else           // si retorna falso
            Serial.println("Tarjeta no indentificada");    // muestra texto equivalente a acceso denegado          
                  
                  mfrc522.PICC_HaltA();     // detiene comunicacion con tarjeta     


}

boolean comparaUID(byte lectura[],byte usuario[]) // funcion comparaUID
{
  for (byte i=0; i < mfrc522.uid.size; i++){    // bucle recorre de a un byte por vez el UID
  if(lectura[i] != usuario[i])        // si byte de UID leido es distinto a usuario
    return(false);          // retorna falso
  }
  return(true);           // si los 4 bytes coinciden retorna verdadero
}





void rojo ()
{
  Serial.println("tarjeta valida"); // si retorna verdadero muestra texto bienvenida
  digitalWrite(ledR, LOW);           //Led inicia apagado
  
 
   digitalWrite(tres, LOW);
  digitalWrite(dos, LOW);
  digitalWrite(uno, LOW);
  
  delay(7000);


   
  

   digitalWrite(tres, HIGH);
  digitalWrite(dos, HIGH);
  digitalWrite(uno, HIGH);
  
  
  digitalWrite(ledR, HIGH);
  
}

void verde ()
{
  Serial.println("tarjeta valida"); // si retorna verdadero muestra texto bienvenida
  digitalWrite(ledV, LOW);           //Led inicia apagado
  
   digitalWrite(tres, HIGH);
  digitalWrite(dos, LOW);
  digitalWrite(uno, LOW);
  
  delay(7000);


   
   digitalWrite(tres, HIGH);
  digitalWrite(dos, HIGH);
  digitalWrite(uno, HIGH);
  ;
  
  digitalWrite(ledV, HIGH);
  
}

void amarillo ()
{
  Serial.println("tarjeta valida"); // si retorna verdadero muestra texto bienvenida
  digitalWrite(ledA, LOW);           //Led inicia apagado
  
   digitalWrite(tres, LOW);
  digitalWrite(dos, HIGH);
  digitalWrite(uno, LOW);
  
  delay(7000);


   
  digitalWrite(tres, HIGH);
  digitalWrite(dos, HIGH);
  digitalWrite(uno, HIGH);
  
  
  digitalWrite(ledA, HIGH);
  
}

void azul ()
{
  Serial.println("tarjeta valida"); // si retorna verdadero muestra texto bienvenida
  digitalWrite(ledN, LOW);           //Led inicia apagado

   digitalWrite(tres, HIGH);
  digitalWrite(dos, HIGH);
  digitalWrite(uno, LOW);
  
  delay(7000);

   
   
   digitalWrite(tres, HIGH);
  digitalWrite(dos, HIGH);
  digitalWrite(uno, HIGH);
  
  
  digitalWrite(ledN, HIGH);
  
}
