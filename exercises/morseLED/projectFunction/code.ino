/*
	Projeto: Funções
    Cliente: SENAI-Timbó
    Projetista: William Colasso Pereira
    Data: 12/06/2024
    
    Resumo: Um programa para mostrar como declarar uma função
    
*/

#define Led_1 2 //Define a localização do LED
#define tempo_Ponto 300		 		//O tempo de espera de um ponto
#define tempo_Traco 800				//O tempo de espera de um traço
#define tempo_Intervalo 1500		//O tempo de espera de uma letra
#define tempo_Retransmissao 3000 	//O tempo até o loop recomeçar 


void setup() //Função Setup
{
 pinMode(Led_1,OUTPUT); //Define a porta 2 como saída
}

void loop() //Função de Loop De programa
{
  ponto();
  intervalo();		//Espera o tempo de um Intervalo
  traco();
  intervalo();		//Espera o tempo de um Intervalo
  traco();
  //1 ponto +2traços = 'W'

  intervalo();//Espera o tempo de um Intervalo
  
  ponto();
  intervalo();		//Espera o tempo de um Intervalo
  ponto();
  //2 Pontos = i
  
  intervalo();
  
  ponto();
  intervalo();		//Espera o tempo de um Intervalo
  traco();
  intervalo();		//Espera o tempo de um Intervalo
   ponto();
  intervalo();		//Espera o tempo de um Intervalo
   ponto();
  //l= .-..
  intervalo();		//Espera o tempo de um Intervalo
  
  ponto();
  intervalo();		//Espera o tempo de um Intervalo
  traco();
  intervalo();		//Espera o tempo de um Intervalo
   ponto();
  intervalo();		//Espera o tempo de um Intervalo
   ponto();
  //l+l = .-..+.-..
  
  intervalo();
  
  ponto();
  intervalo();		//Espera o tempo de um Intervalo
  ponto();
  //i = ..
  intervalo();
  
  led_A();		//Impulso Baixo na porta 
  ponto();			//Espera o tempo de um Traço
  led_B();		//Impulso Baixo na porta 
  intervalo();		//Espera o tempo de um Intervalo
  traco();
  //A = .-
   intervalo();
  
  traco();
  intervalo();		//Espera o tempo de um Intervalo
  traco();
  //m= --
  
  intervalo();
  
  traco();
  intervalo();		//Espera o tempo de um Intervalo
  ponto();
  intervalo();
  traco();
  intervalo();		//Espera o tempo de um Intervalo
  ponto();
  //C= -.-.
  
   intervalo();
  
  traco();
  intervalo();		//Espera o tempo de um Intervalo
  traco();
  intervalo();		//Espera o tempo de um Intervalo
  traco();
  
  intervalo();		//Espera o tempo de um Intervalo
  //O= ---
  
  ponto();
  intervalo();		//Espera o tempo de um Intervalo
  traco();
  intervalo();		//Espera o tempo de um Intervalo
   ponto();
  intervalo();		//Espera o tempo de um Intervalo
   ponto();
  //l= .-..
  
  intervalo();		//Espera o tempo de um Intervalo
  
  ponto();
  intervalo();		//Espera o tempo de um Intervalo
  traco();
  //a = .-
  intervalo();		//Espera o tempo de um Intervalo
  
  ponto();
  intervalo();		//Espera o tempo de um Intervalo
   ponto();
  intervalo();		//Espera o tempo de um Intervalo
   ponto();
  //s= ...
  
  intervalo();		//Espera o tempo de um Intervalo
  
  ponto();
  intervalo();		//Espera o tempo de um Intervalo
   ponto();
  intervalo();		//Espera o tempo de um Intervalo
   ponto();
  //s= ...
  
  intervalo();		//Espera o tempo de um Intervalo
  
  traco();
  intervalo();		//Espera o tempo de um Intervalo
  traco();
  intervalo();		//Espera o tempo de um Intervalo
  traco();
  
  intervalo();		//Espera o tempo de um Intervalo
  //O= ---
  
  delay(tempo_Retransmissao); //Espera o tempo de retransmissão
  
}
void ponto(){
	led_A();		//Impulso Alto na porta 
  	delay(tempo_Ponto); 			//Espera o tempo de um ponto
  	led_B();		//Impulso Baixo na porta 
}

void traco(){
 	 led_A();		//Impulso Baixo na porta 
  	delay(tempo_Traco);			//Espera o tempo de um Traço
  	led_B();		//Impulso Baixo na porta 
}

void intervalo(){

  	delay(tempo_Intervalo);

}

void led_A(){
  
  	digitalWrite(Led_1,HIGH);

}

void led_B(){
  
  digitalWrite(Led_1,LOW);
}



//Fim da programação