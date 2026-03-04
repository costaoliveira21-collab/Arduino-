/*************************************************************

Paulo César & Nicolas Miquelasso

Aula 3 04/03/2026

**************************************************************/

//Denominar os pinos de ligação
#define led1 13
#define led2 12
#define botao 2

bool estadoLED = false;
bool botaoPressionado = false;

int tempo = 400;

// modo de ligação dos pinos
void setup() {
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(botao, INPUT_PULLUP);//RESISTÊNCIA INTERNA
}

//loop de programação lógica de funcionamento
void loop () {
  // lógica de leitura: o PUULUP pressionado retorna LOW
  bool leitura = digitalRead(botao);

//verifica se o botão foi apertado (transição de HIGH para LOW)
if (leitura == LOW && !botaoPressionado) {
  estadoLED = !estadoLED; //inverte o estado
  digitalWrite(led1, estadoLED);
  delay(tempo);
  digitalWrite(led2, estadoLED);
  delay(tempo);

  botaoPressionado = true; // marca que o botão ainda está pressionado
  delay(50); // respiro para evitar ruido (bouce)
}

//verifica se o botão foi solto para permitir novo click 
if (leitura == HIGH && botaoPressionado ) {
  botaoPressionado = false;
}

}
