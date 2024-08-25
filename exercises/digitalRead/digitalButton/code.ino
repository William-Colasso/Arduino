/*
	Projeto: Leitura de botão digital
    Cliente: SENAI-Timbó
    Projetista: William Colasso Pereira
    Data: 09/08/24 - Versão: 1.0
    
    
    Resumo: Exemplo de funcionamento de
    		alguns desvios condicionais.

*/
//Definição de Constantes

#define LED1 2 //Pino do LED
#define LED2 3 //Pino do LED
#define LED3 4 //Pino do LED
#define LED4 5 //Pino do LED
#define BTN 6 //Pino do Botão
#define TL 500 //Define tempo de leitura
#define TL2 25 //Define tempo de leitura

//Definição de Variáveis

bool valorBT = 0; //Variável para o valor do botão
int contador = 2; //Variável para condizer com o LED
  
void setup()	//Inicialização Base
{
  pinMode(LED1, OUTPUT);	//Define o pino como saída
   pinMode(LED1, OUTPUT);	//Define o pino como saída
   pinMode(LED1, OUTPUT);	//Define o pino como saída
   pinMode(LED1, OUTPUT);	//Define o pino como saída
  pinMode(BTN,INPUT);	//Define o pino como entrada
  Serial.begin(9601);	//Define a taxa de bits do monitor Serial
}

void loop()
{
  valorBT = digitalRead(BTN);
  
  if(valorBT == 0){
    
    digitalWrite(contador,1);
    digitalWrite(contador-1,0);
    Serial.print("LED  ");
    Serial.print(contador);
    Serial.println(" ligado.");
    delay(TL2);
    if(contador==5){
      contador = 1;
      digitalWrite(LED4,0);
    }
    contador++;
    
  }else{
    
    
    digitalWrite(contador,0);
    digitalWrite(contador-1,1);
    Serial.print("LED ");
    Serial.print(contador);
    Serial.println(" desligado");
    delay(TL2);
    if(contador==2){
      contador = 7;
    }
    contador--;
  }
  
  delay(TL);
}