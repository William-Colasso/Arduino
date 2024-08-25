/*
	Projeto: Projeto nome
    Cliente: SENAI-Timbó
    Projetista: William Colasso Pereira
    Data: 03/06/2024
    
    Resumo: Meu nome em código morse
    
*/

//Definição de constantes :)

#define tempo_Ponto 300		 		//O tempo de espera de um ponto
#define tempo_Traco 800				//O tempo de espera de um traço
#define tempo_Intervalo 1500		//O tempo de espera de uma letra
#define tempo_Retransmissao 3000 	//O tempo até o loop recomeçar 
#define LED 2		//Define a localização do LED


void setup() //Função Setup
{
 pinMode(LED,OUTPUT); //Define a porta 2 como saída
}

void loop() //Função de Loop De programa
{
  digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  //1 ponto +2traços = 'W'

  delay(tempo_Intervalo);//Espera o tempo de um Intervalo
  
  digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  //2 Pontos = i
  
  delay(tempo_Intervalo);
  
  digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
   digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
   digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  //l= .-..
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  
  digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
   digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
   digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  //l+l = .-..+.-..
  
  delay(tempo_Intervalo);
  
  digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  //i = ..
  delay(tempo_Intervalo);
  
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Ponto);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  //A = .-
   delay(tempo_Intervalo);
  
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  //m= --
  
  delay(tempo_Intervalo);
  
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  //C= -.-.
  
   delay(tempo_Intervalo);
  
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  //O= ---
  
  digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
   digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
   digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  //l= .-..
  
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  
  digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  //a = .-
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  
  digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
   digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
   digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  //s= ...
  
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  
  digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
   digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
   digitalWrite(LED,HIGH);		//Impulso Alto na porta 2
  delay(tempo_Ponto); 			//Espera o tempo de um ponto
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  //s= ...
  
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  digitalWrite(LED,HIGH);		//Impulso Baixo na porta 2
  delay(tempo_Traco);			//Espera o tempo de um Traço
  digitalWrite(LED,LOW);		//Impulso Baixo na porta 2
  
  delay(tempo_Intervalo);		//Espera o tempo de um Intervalo
  //O= ---
  
  delay(tempo_Retransmissao); //Espera o tempo de retransmissão
  
}

void ponto(){
  
  delay(tempo_Ponto);
  
}

void traco(){
  
  delay(tempo_Traco);
  
}

void led_A(){
  
  digitalWrite(LED,HIGH);

}

void led_B(){
  
  digitalWrite(LED,LOW);
}


//Fim da programação