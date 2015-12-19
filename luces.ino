/*
luces navideñas
proyecto en el cual dependiendo de la distancia, se enciende la capa correspondiente.
creado por yeffri salazar
diciembre 2015

*/

long distancia;
long tiempo;
int echo =7;
int trigger =6;
int capa1=13;
int capa2=12;
int capa3=11;
int capa4=10;
int capa5=9;
int capa6=8;
void setup() {
  Serial.begin(9600);
  pinMode(trigger, OUTPUT); 
  pinMode(echo, INPUT);
pinMode(capa1,OUTPUT);
pinMode(capa2,OUTPUT);
pinMode(capa3,OUTPUT);
pinMode(capa4,OUTPUT);
pinMode(capa5,OUTPUT);
pinMode(capa6,OUTPUT);
}

void loop() {
  digitalWrite(trigger,LOW); /* Por cuestión de estabilización del sensor*/
  delayMicroseconds(5);
  digitalWrite(trigger, HIGH); /* envío del pulso ultrasónico*/
  delayMicroseconds(10);
  tiempo=pulseIn(echo, HIGH); /* Función para medir la longitud del pulso entrante. Mide el tiempo que transcurrido entre el envío
  del pulso ultrasónico y cuando el sensor recibe el rebote, es decir: desde que el pin 12 empieza a recibir el rebote, HIGH, hasta que
  deja de hacerlo, LOW, la longitud del pulso entrante*/
  distancia= int(0.017*tiempo); /*fórmula para calcular la distancia obteniendo un valor entero*/
  /*Monitorización en centímetros por el monitor serial*/
  Serial.print("Distancia ");
  Serial.print(distancia);
  Serial.println(" cm");
 delay(10);
if(distancia>0 && distancia <5){
  digitalWrite(capa1,HIGH);
  digitalWrite(capa2,LOW);
  digitalWrite(capa3,LOW);
  digitalWrite(capa4,LOW);
  digitalWrite(capa5,LOW);
  digitalWrite(capa6,LOW);
}
if(distancia>5 && distancia <10){
  digitalWrite(capa1,HIGH);
  digitalWrite(capa2,HIGH);
  digitalWrite(capa3,LOW);
  digitalWrite(capa4,LOW);
  digitalWrite(capa5,LOW);
  digitalWrite(capa6,LOW);
}
if(distancia>10 && distancia <15){
  digitalWrite(capa1,HIGH);
  digitalWrite(capa2,HIGH);
  digitalWrite(capa3,HIGH);
  digitalWrite(capa4,LOW);
  digitalWrite(capa5,LOW);
  digitalWrite(capa6,LOW);
}
if(distancia>15 && distancia <20){
  digitalWrite(capa1,HIGH);
  digitalWrite(capa2,HIGH);
  digitalWrite(capa3,HIGH);
  digitalWrite(capa4,HIGH);
  digitalWrite(capa5,LOW);
  digitalWrite(capa6,LOW);
}
if(distancia>20 && distancia <25){
  digitalWrite(capa1,HIGH);
  digitalWrite(capa2,HIGH);
  digitalWrite(capa3,HIGH);
  digitalWrite(capa4,HIGH);
  digitalWrite(capa5,HIGH);
  digitalWrite(capa6,LOW);
}
if(distancia>25 && distancia <30){
  digitalWrite(capa1,HIGH);
  digitalWrite(capa2,HIGH);
  digitalWrite(capa3,HIGH);
  digitalWrite(capa4,HIGH);
  digitalWrite(capa5,HIGH);
  digitalWrite(capa6,HIGH);
}
}



  
