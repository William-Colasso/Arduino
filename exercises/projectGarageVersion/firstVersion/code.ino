/*
	Projeto: Modelo de servo para portão
	Projestista:William Colasso Pereira
    Cliente: Senai-Timbó
    Turma:AI PSII
    Data:09/07/24
    

	Resumo: Confecção de um portão automático por distância de um sensor.
    		O sensor usado foi um PING))) e de motor, um micro servo.
*/



#include <Servo.h>		//Inclui biblioteca do servo
//Definição de constantes

#define reto_Ang 90  				//Definição de um angulo reto(90 graus)
#define inicial_Ang 0				//Define o angulo incial do servo
#define disancia_Atv 95				//Define a distância de ativação do servo-sensor
#define pingPin 2 					//Define a porta do servo
#define LED_A 4						//Define a porta do LED A
#define LED_B 5						//Define a porta do LED B
//Definição de vaiáveis e objtos	
Servo meuServo;						//Define o objeto do Servo
long duration;						//Duração do pulso de som
int distance;						//Distância que um objeto está do sensor
int delay_reset = 500;


void setup() {						//Função Setup
  Serial.begin(9600); 				//Taxa em bps do monitor serial
  meuServo.attach(3);				//Porta do servo 3
  pinMode(LED_A,OUTPUT);			//Define a porta do LED A como saída
  pinMode(LED_B,OUTPUT);			//Define a porta do LED B como saída
  
}

void loop() {
  									// Configura o pino como saída para enviar o pulso
  pinMode(pingPin, OUTPUT);			//Define a porta para a saída do som				
  digitalWrite(pingPin, HIGH);		//Envia um pulso alto para a posta do sensor
  delayMicroseconds(5);				//Delay de 10 microssegundos
  digitalWrite(pingPin, LOW);		//Reseta o sensor

  									
  pinMode(pingPin, INPUT);			//Define agora a porta para a entrada de dados(eco)
  duration = pulseIn(pingPin, HIGH);//Mede o tempo até que a porta fique HIGH novamente

  
  distance = duration *0.01715;		// Calcula a distância em centímetros

  
  Serial.print("Distancia: ");		// Imprime a distância no monitor serial
  Serial.print(distance);			// Imprime a distância no monitor serial
  Serial.println(" cm");			// Imprime a distância no monitor serial

  if(distance<disancia_Atv){		//Se a distância for menor que o estabelecido
    digitalWrite(LED_A,HIGH);		//Pulso alto na porta do LED de abertura
    digitalWrite(LED_B,LOW);		//Pulso alto na porta do LED de fechamento
    meuServo.write(reto_Ang);		//Mudando o angulo do servo para 90
    
  }else{							//Senão for menor que o estabelecido
    digitalWrite(LED_A,LOW);		//Pulso baixo na porta do LED de abertura
    digitalWrite(LED_B,HIGH);		//Pulso baixo na porta do LED de abertura
   	meuServo.write(inicial_Ang); 	//Define o angulo atual para 0
  }
  
  
  
  delay(delay_reset);				// Pausa por "delay_reset" ms
}


	//FIM DA PROGRAMAÇÃO