/*
	Projeto: Funções
    Cliente: SENAI-Timbó
    Projetista: William Colasso Pereira
    Data: 12/06/2024
    
    Resumo: Um programa para escrever o nome completo em código morse
    
*/

//Definição de constante


#define Led_1 2 //Define a localização do LED
#define tempo_Ponto 300		 		//O tempo de espera de um ponto
#define tempo_Traco 800				//O tempo de espera de um traço
#define tempo_Intervalo 1500		//O tempo de espera de uma letra
#define tempo_Retransmissao 3000 	//O tempo até o ciclo recomeçar 


void setup() 			//Função Setup: inicializa e define as funções iniciais
{
 pinMode(Led_1,OUTPUT); //Define a porta como saída
}

void loop() 			//Função de Loop De programa
{
  ponto();              //mostra um ponto
  intervalo();			//Espera o tempo de um Intervalo
  traco();              //mostra um traço
  intervalo();			//Espera o tempo de um Intervalo
  traco();              //mostra um traço
  
  //1 ponto +2traços = 'W'

  intervalo();			//Espera o tempo de um Intervalo
  
  ponto();              //mostra um ponto
  intervalo();			//Espera o tempo de um Intervalo
  ponto();              //mostra um ponto
  
  //2 Pontos = i
  
  intervalo();			//Espera o tempo de um Intervalo
  
  ponto();              //mostra um ponto
  intervalo();			//Espera o tempo de um Intervalo
  traco();              //mostra um traço
  intervalo();			//Espera o tempo de um Intervalo
  ponto();              //mostra um ponto
  intervalo();			//Espera o tempo de um Intervalo
  ponto();              //mostra um ponto
  //l= .-..
  intervalo();			//Espera o tempo de um Intervalo
  
  ponto();              //mostra um ponto
  intervalo();			//Espera o tempo de um Intervalo
  traco();              //mostra um traço
  intervalo();			//Espera o tempo de um Intervalo
  ponto();              //mostra um ponto
  intervalo();			//Espera o tempo de um Intervalo
  ponto();              //mostra um ponto
  //l+l = .-..+.-..
  
  intervalo();			//Espera o tempo de um Intervalo
  
  ponto();              //mostra um ponto
  intervalo();			//Espera o tempo de um Intervalo
  ponto();              //mostra um ponto
  
  //i = ..
  
  intervalo();			//Espera o tempo de um Intervalo
  
  led_A();				//Impulso Baixo na porta 
  ponto();              //mostra um ponto			//Espera o tempo de um Traço
  led_B();				//Impulso Baixo na porta 
  intervalo();			//Espera o tempo de um Intervalo
  traco();              //mostra um traço
  //A = .-
   intervalo();
  
  traco();              //mostra um traço
  intervalo();			//Espera o tempo de um Intervalo
  traco();              //mostra um traço
  
  //m= --
  
  
  //===========================================
  // Resultado = WILLIAM
  //===========================================
  
  
  intervalo();			//Espera o tempo de um Intervalo
  
  traco();              //mostra um traço
  intervalo();			//Espera o tempo de um Intervalo
  ponto();              //mostra um ponto
  intervalo();
  traco();              //mostra um traço
  intervalo();			//Espera o tempo de um Intervalo
  ponto();              //mostra um ponto
  //C= -.-.
  
   intervalo();			//Espera o tempo de um Intervalo
  
  traco();              //mostra um traço
  intervalo();			//Espera o tempo de um Intervalo
  traco();              //mostra um traço
  intervalo();			//Espera o tempo de um Intervalo
  traco();              //mostra um traço
  
  intervalo();			//Espera o tempo de um Intervalo
  //O= ---
  
  ponto();              //mostra um ponto
  intervalo();			//Espera o tempo de um Intervalo
  traco();              //mostra um traço
  intervalo();			//Espera o tempo de um Intervalo
  ponto();              //mostra um ponto
  intervalo();			//Espera o tempo de um Intervalo
  ponto();              //mostra um ponto
  //l= .-..
  
  intervalo();			//Espera o tempo de um Intervalo
  
  ponto();              //mostra um ponto
  intervalo();			//Espera o tempo de um Intervalo
  traco();              //mostra um traço
  //a = .-
  intervalo();			//Espera o tempo de um Intervalo
  
  ponto();              //mostra um ponto
  intervalo();			//Espera o tempo de um Intervalo
  ponto();              //mostra um ponto
  intervalo();			//Espera o tempo de um Intervalo
  ponto();              //mostra um ponto
  //s= ...
  
  intervalo();			//Espera o tempo de um Intervalo
  
  ponto();              //mostra um ponto
  intervalo();			//Espera o tempo de um Intervalo
  ponto();              //mostra um ponto
  intervalo();			//Espera o tempo de um Intervalo
  ponto();              //mostra um ponto
  //s= ...
  
  intervalo();			//Espera o tempo de um Intervalo
  
  traco();              //mostra um traço
  intervalo();			//Espera o tempo de um Intervalo
  traco();              //mostra um traço
  intervalo();			//Espera o tempo de um Intervalo
  traco();              //mostra um traço
  
  intervalo();			//Espera o tempo de um Intervalo
  //O= ---
  
  
   	//===========================================
  	// Resultado = COLASSO
  	//===========================================
  
  
traco();              	//mostra um traço
intervalo();			//Espera o tempo de um Intervalo
ponto();              	//mostra um ponto
intervalo();			//Espera o tempo de um Intervalo
ponto();              	//mostra um ponto
intervalo();			//Espera o tempo de um Intervalo
ponto();              	//mostra um ponto
intervalo();			//Espera o tempo de um Intervalo
traco();              	//mostra um traço
  
// P= -...

ponto();              	//mostra um ponto
intervalo();			//Espera o tempo de um Intervalo
  
// E = .

intervalo();			//Espera o tempo de um Intervalo
  
ponto();              	//mostra um ponto
intervalo();			//Espera o tempo de um Intervalo
traco();              	//mostra um traço
intervalo();			//Espera o tempo de um Intervalo
ponto();            	  //mostra um ponto
// R = .-.

ponto();              	//mostra um ponto
intervalo();			//Espera o tempo de um Intervalo
// E = .

ponto();              	//mostra um ponto
intervalo();			//Espera o tempo de um Intervalo
ponto();              	//mostra um ponto
// I = ..

ponto();             	 //mostra um ponto
intervalo();			//Espera o tempo de um Intervalo
traco();              	//mostra um traço
intervalo();			//Espera o tempo de um Intervalo
ponto();              	//mostra um ponto
  
// R = .-. 
  
led_A();				//Impulso Baixo na porta 
ponto();              	//mostra um ponto			
led_B();				//Impulso Baixo na porta 
intervalo();			//Espera o tempo de um Intervalo
traco();              	//mostra um traço
  
//A = .-  
  
  //===========================================
  // Resultado = PEREIRA
  //===========================================
  
  
  //===================================================
  // Resultado Final: WILLIAM COLASSO PEREIRA	  	  =
  //===================================================
  
  delay(tempo_Retransmissao); //Espera o tempo de retransmissão
  
}
void ponto(){	//Função para mostrar um ponto
	digitalWrite(Led_1,HIGH);	//Impulso Alto na porta 
  	delay(tempo_Ponto); 		//Comando para esperar o tempo de um ponto
  	digitalWrite(Led_1,LOW)		//Impulso Baixo na porta 
}

void traco(){	//Função para mostrar um traço
 	 digitalWrite(Led_1,HIGH);	//Impulso Baixo na porta 
  	delay(tempo_Traco);			//Comando para esperar o tempo de um traço
  	digitalWrite(Led_1,LOW)		//Impulso Baixo na porta 
}

void intervalo(){	//Função para esperar o tempo de um intervalo

  	delay(tempo_Intervalo);		//Comando para esperar o tempo de um intervalo

}




//Fim da programação