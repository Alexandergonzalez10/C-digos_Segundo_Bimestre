const int A = 11;
const int B = 10;
const int C = 7;
const int D = 8;
const int E = 9;
const int F = 12;
const int G = 13;

const int N = 7;
const int SEGMENTOS[N] = {A,B,C,D,E,F,G};

/*Anodo Comun*/
const int DIGITOS [5][N]= {
 
  /*1*/ {0,1,1,0,0,0,0},
  /*3*/ {1,1,1,1,0,0,1},
  /*5*/ {1,0,1,1,0,1,1},
  /*7*/ {1,1,1,0,0,0,0},
  /*9*/ {1,1,1,0,0,1,1},
};
  
float L = 2.20462262;
float K = 50;
float p;

float X = 20;
float M = 1000000;
float q;
 
void setup()
{
  for(int i = 0; i<N; i++){
    pinMode(SEGMENTOS[i], OUTPUT);
    digitalWrite(SEGMENTOS[i], LOW);
  }
  
  Serial.begin(9600);
  Serial.println("Kilogramos a Libras");
  p = Funcion1(K,L);
  Serial.print(K);
  Serial.println(" Kilos son");
  Serial.print(p);
  Serial.println(" Libras");
  
  Serial.println("//////////////////////////////");
  
  Serial.println("Amperios a microamperios");
  q = Funcion2(X,M);
  Serial.print(X);
  Serial.println(" Amperios son");
  Serial.print(q);
  Serial.println(" microamperios");
  
  
}

void print(int d){
  for(int i = 0; i<N; i++){
    digitalWrite(SEGMENTOS[i], DIGITOS[d][i]);
  }
}

float Funcion1(float f, float g){
  float resultado1;
  resultado1 = f * g;
} 
float Funcion2(float b, float e){
  float resultado2;
  resultado2 = b * e;
}

void loop()
{
  for(int i = 0; i<5; i++){
    print(i);
    delay(1000);
  }
}
