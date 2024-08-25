/*
	Projeto: Luizinha
    Cliente: SENAI-Timbó
    Projetista: William Colasso Pereira
    Data: 20/05/2024
    
    Resumo: Pisca-Pisca estrelinha
    
*/

//		Definição de constantes
#define Led_1 9
#define Led_2 8
#define Led_3 7
#define Led_4 6
#define Led_5 5
#define Led_6 4


void setup()		//Inicializa e define os valores iniciais
{
  	pinMode(Led_6,OUTPUT);		//Define a porta 4 como saída 
  	pinMode(Led_5,OUTPUT);		//Define a porta 5 como saída 
  	pinMode(Led_4,OUTPUT);		//Define a porta 6 como saída
  
	pinMode(Led_3,OUTPUT);		//Define a porta 7 como saída 
  	pinMode(Led_2,OUTPUT);		//Define a porta 8 como saída 
  	pinMode(Led_1,OUTPUT);		//Define a porta 9 como saída
}

void loop()		//Incia-se o loop infinito
{
  	digitalWrite(Led_3,HIGH);
  	digitalWrite(Led_4,HIGH);
  	delay(350);
  	digitalWrite(Led_2,HIGH);
  	digitalWrite(Led_5,HIGH);
  	delay(350);
  	digitalWrite(Led_1,HIGH);
  	digitalWrite(Led_6,HIGH);
  	delay(350);
  	digitalWrite(Led_3,LOW);
  	digitalWrite(Led_4,LOW);
  	delay(350);
  	digitalWrite(Led_2,LOW);
  	digitalWrite(Led_5,LOW);
  	delay(350);
  	digitalWrite(Led_1,LOW);
  	digitalWrite(Led_6,LOW);
  	delay(350);
}

		/*FIM DA PROGRAMAÇÃO*/