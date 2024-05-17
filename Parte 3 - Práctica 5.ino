/*

   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Relevadores y visualizadores
   Alexander González 2020414
   Fecha: 03 de mayo 2024
   
*/
const int A = 11;
const int B = 10;
const int C = 7;
const int D = 8;
const int E = 6;
const int F = 12;
const int G = 13;

const int N = 7;
const int SEGMENTOS[N] = {A,B,C,D,E,F,G};

/*Anodo Comun*/
const int DIGITOS [10][N]= {
 
  /*9*/ {1,1,1,0,0,1,1},
  /*8*/ {1,1,1,1,1,1,1},
  /*7*/ {1,1,1,0,0,0,0},
  /*6*/ {1,0,1,1,1,1,1},
  /*5*/ {1,0,1,1,0,1,1},
  /*4*/ {0,1,1,0,0,1,1},
  /*3*/ {1,1,1,1,0,0,1},
  /*2*/ {1,1,0,1,1,0,1},
  /*1*/ {0,1,1,0,0,0,0},
  /*0*/ {1,1,1,1,1,1,0},
};

const int pinBuzzer = 9 ; 
const float tonos[] = {250};
const int countTonos = 1;
 
void setup()
{
  for(int i = 0; i<N; i++){
    pinMode(SEGMENTOS[i], OUTPUT);
    pinMode(9, INPUT);
    digitalWrite(SEGMENTOS[i], LOW);
  }
  
}

void print(int d){
  for(int i = 0; i<N; i++){
    digitalWrite(SEGMENTOS[i], DIGITOS[d][i]);
  }
}

void loop()
{
  for(int i = 0; i<10; i++){
    print(i);
    delay(1000);
  }
  for (int iTono = 0; iTono < countTonos; iTono++) {
      tone(pinBuzzer, tonos[iTono]);
      delay(500);
      noTone(pinBuzzer);}
}
