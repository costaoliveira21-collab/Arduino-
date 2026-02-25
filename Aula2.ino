/***********************************************************************

AULA 2 - Sequencia de LEDS - 25/02/2026
Autores: Rodrigo Calixto e Paulo César

************************************************************************/

//denominar os pinos de ligação
#define led1 13
#define led2 12
#define led3 11
#define led4 10
#define led5 9

int tempo = 50;

//modo de ligação dos pinos
void setup() {

  pinMode(led1, OUTPUT);  // OUTPUT - saida
  pinMode(led2, OUTPUT);  // INPUT - entrada
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}
// loop de programação lógica de funcionamento
void loop() {
  digitalWrite(led1, HIGH);
  delay(tempo);  //1segundo = 1000 milissegundos
  digitalWrite(led2, HIGH);
  delay(tempo);
  digitalWrite(led3, HIGH);
  delay(tempo);
  digitalWrite(led4, HIGH);
  delay(tempo);
  digitalWrite(led5, HIGH);
  delay(tempo);
  digitalWrite(led5, LOW);
  delay(tempo);
  digitalWrite(led4, LOW);
  delay(tempo);
  digitalWrite(led3, LOW);
  delay(tempo);
  digitalWrite(led2, LOW);
  delay(tempo);
  digitalWrite(led1, LOW);
  delay(tempo);
}
