/*
Programa desarrollado por Tomas Alejandro Jaramilllo Rodriguez
Programa utilizado en el trabajo de residencias profecionales "CREACION Y ADAPTACION DE EQUIPO DEL TIPO MULTISENSORIAL PARA EL APOYO EN EL DESARROLLO INTEGRAL DE NINOS CON BARRERAS DE APRENDIZAJE"



CODIGO PARA LA CREACION DE MULTIPLES FLECHAS EN DIFERENTES DIRRECCIONES DEPENDIENDO AL ESTADO DEL SENSOR
*/
#include "LedControl.h"     // incluye libreria LedControl

LedControl lc=LedControl(11,13,10,4); // crea objeto
#define demora 250      // constante demora con valor de 250

//DEFINICION DE TODAS LAS FLECHAS POSIBLES



//izquierda IZQUIERDA

byte flecha_izquierda_1[8] = {   // array con primer cuadro de animacion de flecha
  B00000000,
  B00011000,
  B00111100,
  B01111110,
  B11011011,
  B00011000,
  B00011000,
  B00011000
};

byte flecha_izquierda_2[8] = {   // array con segundo cuadro de animacion de flecha
  B00011000,
  B00111100,
  B01111110,
  B11011011,
  B00011000,
  B00011000,
  B00011000,
  B00000000
};

byte flecha_izquierda_3[8] = {   // array con tercer cuadro de animacion de flecha
  B00111100,
  B01111110,
  B11011011,
  B00011000,
  B00011000,
  B00011000,
  B00000000,
  B00000000
};

byte flecha_izquierda_4[8] = {   // array con cuarto cuadro de animacion de flecha
  B01111110,
  B11011011,
  B00011000,
  B00011000,
  B00011000,
  B00000000,
  B00000000,
  B00011000
};

byte flecha_izquierda_5[8] = {   // array con quinto cuadro de animacion de flecha
  B11011011,
  B00011000,
  B00011000,
  B00011000,
  B00000000,
  B00000000,
  B00011000,
  B00111100
};

byte flecha_izquierda_6[8] = {   // array con sexto cuadro de animacion de flecha
  B00011000,
  B00011000,
  B00011000,
  B00000000,
  B00000000,
  B00011000,
  B00111100,
  B01111110
};

byte flecha_izquierda_7[8] = {   // array con septimo cuadro de animacion de flecha
  B00011000,
  B00011000,
  B00000000,
  B00000000,
  B00011000,
  B00111100,
  B01111110,
  B11011011
};

byte flecha_izquierda_8[8] = {   // array con octavo cuadro de animacion de flecha
  B00011000,
  B00000000,
  B00000000,
  B00011000,
  B00111100,
  B01111110,
  B11011011,
  B00011000
};

byte flecha_izquierda_9[8] = {   // array con noveno cuadro de animacion de flecha
  B00000000,
  B00000000,
  B00011000,
  B00111100,
  B01111110,
  B11011011,
  B00011000,
  B00011000
};


//DERECHA

byte flecha_derecha_1[8] = {   // array con primer cuadro de animacion de flecha
  B00011000,
  B00011000,
  B00011000,
  B11011011,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
};

byte flecha_derecha_2[8] = {   // array con segundo cuadro de animacion de flecha
  B00000000,
  B00011000,
  B00011000,
  B00011000,
  B11011011,
  B01111110,
  B00111100,
  B00011000,
};

byte flecha_derecha_3[8] = {   // array con tercer cuadro de animacion de flecha
  B00000000,
  B00000000,
  B00011000,
  B00011000,
  B00011000,
  B11011011,
  B01111110,
  B00111100,
};

byte flecha_derecha_4[8] = {   // array con cuarto cuadro de animacion de flecha
  B00011000,
  B00000000,
  B00000000,
  B00011000,
  B00011000,
  B00011000,
  B11011011,
  B01111110,
};

byte flecha_derecha_5[8] = {   // array con quinto cuadro de animacion de flecha
  B00111100,
  B00011000,
  B00000000,
  B00000000,
  B00011000,
  B00011000,
  B00011000,
  B11011011,
};

byte flecha_derecha_6[8] = {   // array con sexto cuadro de animacion de flecha
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  B00000000,
  B00011000,
  B00011000,
  B00011000,
};

byte flecha_derecha_7[8] = {   // array con septimo cuadro de animacion de flecha
  B11011011,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  B00000000,
  B00011000,
  B00011000,
};

byte flecha_derecha_8[8] = {   // array con octavo cuadro de animacion de flecha
  B00011000,
  B11011011,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  B00000000,
  B00011000,
};

byte flecha_derecha_9[8] = {   // array con noveno cuadro de animacion de flecha
  B00011000,
  B00011000,
  B11011011,
  B01111110,
  B00111100,
  B00011000,
  B00000000,
  B00000000,
};


//ARRIVA ARRIVA 

byte flecha_arriba_1[8] = {   // array con primer cuadro de animacion de flecha
B00010000,
B00011000,
B00001100,
B11111110,
B11111110,
B00001100,
B00011000,
B00010000,
};

byte flecha_arriba_2[8] = {   // array con segundo cuadro de animacion de flecha
B00001000,
B00001100,
B00000110,
B01111111,
B01111111,
B00000110,
B00001100,
B00001000,

};

byte flecha_arriba_3[8] = {   // array con tercer cuadro de animacion de flecha
B00000100,
B00000110,
B00000011,
B00111111,
B00111111,
B00000011,
B00000110,
B00000100,

};

byte flecha_arriba_4[8] = {   // array con cuarto cuadro de animacion de flecha
B00000010,
B00000011,
B00000001,
B10011111,
B10011111,
B00000001,
B00000011,
B00000010,

};

byte flecha_arriba_5[8] = {   // array con quinto cuadro de animacion de flecha
B00000001,
B00000001,
B10000000,
B11001111,
B11001111,
B10000000,
B00000001,
B00000001,

};

byte flecha_arriba_6[8] = {   // array con sexto cuadro de animacion de flecha
B00000000,
B10000000,
B11000000,
B11100111,
B11100111,
B11000000,
B10000000,
B00000000,

};

byte flecha_arriba_7[8] = {   // array con septimo cuadro de animacion de flecha
B10000000,
B11000000,
B01100000,
B11110011,
B11110011,
B01100000,
B11000000,
B10000000,

};

byte flecha_arriba_8[8] = {   // array con octavo cuadro de animacion de flecha
B01000000,
B01100000,
B00110000,
B11111001,
B11111001,
B00110000,
B01100000,
B01000000,

};

byte flecha_arriba_9[8] = {   // array con noveno cuadro de animacion de flecha
B00100000,
B00110000,
B00011000,
B11111100,
B11111100,
B00011000,
B00110000,
B00100000,

};


//ABAJO

byte flecha_abajo_1[8] = {   // array con primer cuadro de animacion de flecha
B00001000,
B00011000,
B00110000,
B01111111,
B01111111,
B00110000,
B00011000,
B00001000,

};

byte flecha_abajo_2[8] = {   // array con segundo cuadro de animacion de flecha
B00010000,
B00110000,
B01100000,
B11111110,
B11111110,
B01100000,
B00110000,
B00010000,
};

byte flecha_abajo_3[8] = {   // array con tercer cuadro de animacion de flecha
B00100000,
B01100000,
B11000000,
B11111100,
B11111100,
B11000000,
B01100000,
B00100000,
};

byte flecha_abajo_4[8] = {   // array con cuarto cuadro de animacion de flecha
B01000000,
B11000000,
B10000000,
B11111001,
B11111001,
B10000000,
B11000000,
B01000000,
};

byte flecha_abajo_5[8] = {   // array con quinto cuadro de animacion de flecha
B10000000,
B10000000,
B00000001,
B11110011,
B11110011,
B00000001,
B10000000,
B10000000,
};

byte flecha_abajo_6[8] = {   // array con sexto cuadro de animacion de flecha
B00000000,
B00000001,
B00000011,
B11100111,
B11100111,
B00000011,
B00000001,
B00000000,
};

byte flecha_abajo_7[8] = {   // array con septimo cuadro de animacion de flecha
B00000001,
B00000011,
B00000110,
B11001111,
B11001111,
B00000110,
B00000011,
B00000001,
};

byte flecha_abajo_8[8] = {   // array con octavo cuadro de animacion de flecha
B00000010,
B00000110,
B00001100,
B10011111,
B10011111,
B00001100,
B00000110,
B00000010,
};

byte flecha_abajo_9[8] = {   // array con noveno cuadro de animacion de flecha
B00000100,
B00001100,
B00011000,
B00111111,
B00111111,
B00011000,
B00001100,
B00000100,
};






 //Asignacion de los pines de Entrada 
  int izq=2;
  int der=3;
  int aba=4;
  int arr=5;





void setup() {
  lc.shutdown(0,true);     // enciende la matriz
  lc.setIntensity(0,8);     // establece brillo
  lc.clearDisplay(0);     // blanquea matriz

  lc.shutdown(1,true);     // enciende la matriz
  lc.setIntensity(1,8);     // establece brillo
  lc.clearDisplay(1);     // blanquea matriz

  lc.shutdown(2,true);     // enciende la matriz
  lc.setIntensity(2,8);     // establece brillo
  lc.clearDisplay(2);     // blanquea matriz

  lc.shutdown(3,true);     // enciende la matriz
  lc.setIntensity(3,8);     // establece brillo
  lc.clearDisplay(3);     // blanquea matriz

 
  //Establecimiento de los pines como entrada
    pinMode(izq, INPUT);
    pinMode(der, INPUT);
    pinMode(aba, INPUT);
    pinMode(arr, INPUT);
  
}





void loop(){
  if( digitalRead(izq)== HIGH) // PIDO LECTURA DE COMO ESTA EL INTERRUPTOR
       {
  
   izquierda ();
        }  

 else if ( digitalRead(der)== HIGH) {
    
  derecha();
 }

 else if ( digitalRead(arr)== HIGH) {
   
   arriba ();
 }

 else if ( digitalRead(aba)== HIGH) {
  
   abajo ();
 }
}






void izquierda () {
  lc.shutdown(0,false);
  lc.shutdown(1,true);
  lc.shutdown(2,true);
  lc.shutdown(3,true);

  mostrar_1iz();        // llama funcion mostrar_1
  delay(demora);      // demora
  mostrar_2iz();        // llama funcion mostrar_2
  delay(demora);      // demora
  mostrar_3iz();        // llama funcion mostrar_3
  delay(demora);      // demora
  mostrar_4iz();        // llama funcion mostrar_4
  delay(demora);      // demora
  mostrar_5iz();        // llama funcion mostrar_5
  delay(demora);      // demora
  mostrar_6iz();        // llama funcion mostrar_6
  delay(demora);      // demora
  mostrar_7iz();        // llama funcion mostrar_7
  delay(demora);      // demora
  mostrar_8iz();        // llama funcion mostrar_8
  delay(demora);      // demora
  mostrar_9iz();        // llama funcion mostrar_9
  delay(demora);      // demora
  
  mostrar_1iz();        // llama funcion mostrar_1
  delay(demora);      // demora
  mostrar_2iz();        // llama funcion mostrar_2
  delay(demora);      // demora
  mostrar_3iz();        // llama funcion mostrar_3
  delay(demora);      // demora
  mostrar_4iz();        // llama funcion mostrar_4
  delay(demora);      // demora
  mostrar_5iz();        // llama funcion mostrar_5
  delay(demora);      // demora
  mostrar_6iz();        // llama funcion mostrar_6
  delay(demora);      // demora
  mostrar_7iz();        // llama funcion mostrar_7
  delay(demora);      // demora
  mostrar_8iz();        // llama funcion mostrar_8
  delay(demora);      // demora
  mostrar_9iz();        // llama funcion mostrar_9
  delay(demora);      // demora

  mostrar_1iz();        // llama funcion mostrar_1
  delay(demora);      // demora
  
  lc.shutdown(0,true);


}








void derecha () {
  lc.shutdown(0,true);
  lc.shutdown(1,false);
  lc.shutdown(2,true);
  lc.shutdown(3,true);

  mostrar_1de();        // llama funcion mostrar_1
  delay(demora);      // demora
  mostrar_2de();        // llama funcion mostrar_2
  delay(demora);      // demora
  mostrar_3de();        // llama funcion mostrar_3
  delay(demora);      // demora
  mostrar_4de();        // llama funcion mostrar_4
  delay(demora);      // demora
  mostrar_5de();        // llama funcion mostrar_5
  delay(demora);      // demora
  mostrar_6de();        // llama funcion mostrar_6
  delay(demora);      // demora
  mostrar_7de();        // llama funcion mostrar_7
  delay(demora);      // demora
  mostrar_8de();        // llama funcion mostrar_8
  delay(demora);      // demora
  mostrar_9de();        // llama funcion mostrar_9
  delay(demora);      // demora
  
  mostrar_1de();        // llama funcion mostrar_1
  delay(demora);      // demora
  mostrar_2de();        // llama funcion mostrar_2
  delay(demora);      // demora
  mostrar_3de();        // llama funcion mostrar_3
  delay(demora);      // demora
  mostrar_4de();        // llama funcion mostrar_4
  delay(demora);      // demora
  mostrar_5de();        // llama funcion mostrar_5
  delay(demora);      // demora
  mostrar_6de();        // llama funcion mostrar_6
  delay(demora);      // demora
  mostrar_7de();        // llama funcion mostrar_7
  delay(demora);      // demora
  mostrar_8de();        // llama funcion mostrar_8
  delay(demora);      // demora
  mostrar_9de();        // llama funcion mostrar_9
  delay(demora);      // demora

  mostrar_1de();        // llama funcion mostrar_1
  delay(demora);      // demora
  
  lc.shutdown(1,true);


  
}






void arriba () {
  lc.shutdown(0,true);
  lc.shutdown(1,true);
  lc.shutdown(2,false);
  lc.shutdown(3,true);

   mostrar_1ar();        // llama funcion mostrar_1
  delay(demora);      // demora
  mostrar_2ar();        // llama funcion mostrar_2
  delay(demora);      // demora
  mostrar_3ar();        // llama funcion mostrar_3
  delay(demora);      // demora
  mostrar_4ar();        // llama funcion mostrar_4
  delay(demora);      // demora
  mostrar_5ar();        // llama funcion mostrar_5
  delay(demora);      // demora
  mostrar_6ar();        // llama funcion mostrar_6
  delay(demora);      // demora
  mostrar_7ar();        // llama funcion mostrar_7
  delay(demora);      // demora
  mostrar_8ar();        // llama funcion mostrar_8
  delay(demora);      // demora
  mostrar_9ar();        // llama funcion mostrar_9
  delay(demora);      // demora
  
  mostrar_1ar();        // llama funcion mostrar_1
  delay(demora);      // demora
  mostrar_2ar();        // llama funcion mostrar_2
  delay(demora);      // demora
  mostrar_3ar();        // llama funcion mostrar_3
  delay(demora);      // demora
  mostrar_4ar();        // llama funcion mostrar_4
  delay(demora);      // demora
  mostrar_5ar();        // llama funcion mostrar_5
  delay(demora);      // demora
  mostrar_6ar();        // llama funcion mostrar_6
  delay(demora);      // demora
  mostrar_7ar();        // llama funcion mostrar_7
  delay(demora);      // demora
  mostrar_8ar();        // llama funcion mostrar_8
  delay(demora);      // demora
  mostrar_9ar();        // llama funcion mostrar_9
  delay(demora);      // demora

  mostrar_1ar();        // llama funcion mostrar_1
  delay(demora);      // demora
  
  lc.shutdown(2,true);
  
}











void abajo () {
lc.shutdown(0,true);
lc.shutdown(1,true);
lc.shutdown(2,true);
lc.shutdown(3,false);


   mostrar_1ab();        // llama funcion mostrar_1
  delay(demora);      // demora
  mostrar_2ab();        // llama funcion mostrar_2
  delay(demora);      // demora
  mostrar_3ab();        // llama funcion mostrar_3
  delay(demora);      // demora
  mostrar_4ab();        // llama funcion mostrar_4
  delay(demora);      // demora
  mostrar_5ab();        // llama funcion mostrar_5
  delay(demora);      // demora
  mostrar_6ab();        // llama funcion mostrar_6
  delay(demora);      // demora
  mostrar_7ab();        // llama funcion mostrar_7
  delay(demora);      // demora
  mostrar_8ab();        // llama funcion mostrar_8
  delay(demora);      // demora
  mostrar_9ab();        // llama funcion mostrar_9
  delay(demora);      // demora
  
  mostrar_1ab();        // llama funcion mostrar_1
  delay(demora);      // demora
  mostrar_2ab();        // llama funcion mostrar_2
  delay(demora);      // demora
  mostrar_3ab();        // llama funcion mostrar_3
  delay(demora);      // demora
  mostrar_4ab();        // llama funcion mostrar_4
  delay(demora);      // demora
  mostrar_5ab();        // llama funcion mostrar_5
  delay(demora);      // demora
  mostrar_6ab();        // llama funcion mostrar_6
  delay(demora);      // demora
  mostrar_7ab();        // llama funcion mostrar_7
  delay(demora);      // demora
  mostrar_8ab();        // llama funcion mostrar_8
  delay(demora);      // demora
  mostrar_9ab();        // llama funcion mostrar_9
  delay(demora);      // demora

  mostrar_1ab();        // llama funcion mostrar_1
  delay(demora);      // demora
  
  lc.shutdown(3,true);


}


















// VOIDS DE FLECHAS DE IZQ



void mostrar_1iz(){     // funcion mostrar_1
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,flecha_izquierda_1[i]);  // establece fila con valor de array flecha_arriba_1
  }
}

void mostrar_2iz(){     // funcion mostrar_2
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,flecha_izquierda_2[i]);  // establece fila con valor de array flecha_arriba_2
  }
}

void mostrar_3iz(){     // funcion mostrar_3
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(0,i,flecha_izquierda_3[i]);  // establece fila con valor de array flecha_arriba_3
  }
}

void mostrar_4iz(){     // funcion mostrar_4
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,flecha_izquierda_4[i]);  // establece fila con valor de array flecha_arriba_4
  }
}

void mostrar_5iz(){     // funcion mostrar_5
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,flecha_izquierda_5[i]);  // establece fila con valor de array flecha_arriba_5
  }
}

void mostrar_6iz(){     // funcion mostrar_6
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,flecha_izquierda_6[i]);  // establece fila con valor de array flecha_arriba_6
  }
}

void mostrar_7iz(){     // funcion mostrar_7
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,flecha_izquierda_7[i]);  // establece fila con valor de array flecha_arriba_7
  }
}

void mostrar_8iz(){     // funcion mostrar_8
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,flecha_izquierda_8[i]);  // establece fila con valor de array flecha_arriba_8
  }
}

void mostrar_9iz(){     // funcion mostrar_9
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(0,i,flecha_izquierda_9[i]);  // establece fila con valor de array flecha_arriba_9
  }
}







// VOIDS DE FLECHAS DE DER



void mostrar_1de(){     // funcion mostrar_1
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(1,i,flecha_derecha_1[i]);  // establece fila con valor de array flecha_arriba_1
  }
}

void mostrar_2de(){     // funcion mostrar_2
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(1,i,flecha_derecha_2[i]);  // establece fila con valor de array flecha_arriba_2
  }
}

void mostrar_3de(){     // funcion mostrar_3
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(1,i,flecha_derecha_3[i]);  // establece fila con valor de array flecha_arriba_3
  }
}

void mostrar_4de(){     // funcion mostrar_4
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(1,i,flecha_derecha_4[i]);  // establece fila con valor de array flecha_arriba_4
  }
}

void mostrar_5de(){     // funcion mostrar_5
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(1,i,flecha_derecha_5[i]);  // establece fila con valor de array flecha_arriba_5
  }
}

void mostrar_6de(){     // funcion mostrar_6
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(1,i,flecha_derecha_6[i]);  // establece fila con valor de array flecha_arriba_6
  }
}

void mostrar_7de(){     // funcion mostrar_7
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(1,i,flecha_derecha_7[i]);  // establece fila con valor de array flecha_arriba_7
  }
}

void mostrar_8de(){     // funcion mostrar_8
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(1,i,flecha_derecha_8[i]);  // establece fila con valor de array flecha_arriba_8
  }
}

void mostrar_9de(){     // funcion mostrar_9
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(1,i,flecha_derecha_9[i]);  // establece fila con valor de array flecha_arriba_9
  }
}






//void de flechas AR






void mostrar_1ar(){     // funcion mostrar_1
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(2,i,flecha_arriba_1[i]);  // establece fila con valor de array flecha_arriba_1
  }
}

void mostrar_2ar(){     // funcion mostrar_2
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(2,i,flecha_arriba_2[i]);  // establece fila con valor de array flecha_arriba_2
  }
}

void mostrar_3ar(){     // funcion mostrar_3
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(2,i,flecha_arriba_3[i]);  // establece fila con valor de array flecha_arriba_3
  }
}

void mostrar_4ar(){     // funcion mostrar_4
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(2,i,flecha_arriba_4[i]);  // establece fila con valor de array flecha_arriba_4
  }
}

void mostrar_5ar(){     // funcion mostrar_5
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(2,i,flecha_arriba_5[i]);  // establece fila con valor de array flecha_arriba_5
  }
}

void mostrar_6ar(){     // funcion mostrar_6
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(2,i,flecha_arriba_6[i]);  // establece fila con valor de array flecha_arriba_6
  }
}

void mostrar_7ar(){     // funcion mostrar_7
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(2,i,flecha_arriba_7[i]);  // establece fila con valor de array flecha_arriba_7
  }
}

void mostrar_8ar(){     // funcion mostrar_8
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(2,i,flecha_arriba_8[i]);  // establece fila con valor de array flecha_arriba_8
  }
}

void mostrar_9ar(){     // funcion mostrar_9
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(2,i,flecha_arriba_9[i]);  // establece fila con valor de array flecha_arriba_9
  }
}





//void de las flchas Ab


void mostrar_1ab(){     // funcion mostrar_1
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(3,i,flecha_abajo_1[i]);  // establece fila con valor de array flecha_arriba_1
  }
}

void mostrar_2ab(){     // funcion mostrar_2
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(3,i,flecha_abajo_2[i]);  // establece fila con valor de array flecha_arriba_2
  }
}

void mostrar_3ab(){     // funcion mostrar_3
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array
  {
    lc.setRow(3,i,flecha_abajo_3[i]);  // establece fila con valor de array flecha_arriba_3
  }
}

void mostrar_4ab(){     // funcion mostrar_4
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(3,i,flecha_abajo_4[i]);  // establece fila con valor de array flecha_arriba_4
  }
}

void mostrar_5ab(){     // funcion mostrar_5
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(3,i,flecha_abajo_5[i]);  // establece fila con valor de array flecha_arriba_5
  }
}

void mostrar_6ab(){     // funcion mostrar_6
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(3,i,flecha_abajo_6[i]);  // establece fila con valor de array flecha_arriba_6
  }
}

void mostrar_7ab(){     // funcion mostrar_7
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(3,i,flecha_abajo_7[i]);  // establece fila con valor de array flecha_arriba_7
  }
}

void mostrar_8ab(){     // funcion mostrar_8
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(3,i,flecha_abajo_8[i]);  // establece fila con valor de array flecha_arriba_8
  }
}

void mostrar_9ab(){     // funcion mostrar_9
  for (int i = 0; i < 8; i++)     // bucle itera 8 veces por el array 
  {
    lc.setRow(3,i,flecha_abajo_9[i]);  // establece fila con valor de array flecha_arriba_9
  }
}
