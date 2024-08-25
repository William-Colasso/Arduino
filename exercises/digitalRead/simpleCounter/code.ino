/*
	Projeto: Contador Simples
    Cliente: SENAI-Timbó
    Projetista: William Colasso Pereira
    Data: 14/08/24 - Versão: 1.0
    
    
    Resumo: Contagem de eventos

*/
//Definição de Constantes

#define LED1 2 //Pino do LED
#define LED2 3 //Pino do LED
#define LED3 4 //Pino do LED
#define LED4 5 //Pino do LED
#define BTN 6 	//Pino do Botão(sensor)
#define TL 50 //Tempo de espera

//Definição de Variáveis

bool valueBT = 0; 		//Variável para o valor do botão
bool arrowSensor = 0;	//Variável que identifica a passagem de peça
int counter = 0; 		//Variável para condizer o indice de contagem

  
void setup()	//Inicialização Base
{
  pinMode(LED1, OUTPUT);	//Define o pino como saída
  pinMode(LED2, OUTPUT);	//Define o pino como saída
  pinMode(LED3, OUTPUT);	//Define o pino como saída
  pinMode(LED4, OUTPUT);	//Define o pino como saída
  pinMode(BTN,INPUT);	//Define o pino como entrada
  Serial.begin(9601);	//Define a taxa de bits do monitor Serial
}

void loop() //programação em loop
{
  valueBT = digitalRead(BTN);
  delay(TL);
  
  if(!valueBT){ 	//Teste se tem peça no sensor
    arrowSensor = 1;//Atribui um valor alto na variavel
  }
  
  if(valueBT && arrowSensor){	//Te se a peça saiu
    counter++;					//Incrementa 1 ao valor do contador
    arrowSensor = 0;
    Serial.print("Quantidade de componentes:");
    Serial.println(counter);
    /*
    if(counter == 1){
     digitalWrite(LED1,HIGH); 
     digitalWrite(LED4,LOW);
    }else if(counter==2){
      digitalWrite(LED2,HIGH); 
      digitalWrite(LED1,LOW);
    }else if(counter==3){
      digitalWrite(LED3,HIGH); 
     digitalWrite(LED2,LOW);
    }else{
      digitalWrite(LED4,HIGH); 
     digitalWrite(LED3,LOW);
      counter = 0;
    }
    */
    
    for(int i =1; i<5;i++){
      if(counter==i){
        digitalWrite(LED4,0);
        digitalWrite(i+1,1);
        digitalWrite(i,0);
        if(counter==4){
         counter = 0; 
      	}
      }
    }
  }
}