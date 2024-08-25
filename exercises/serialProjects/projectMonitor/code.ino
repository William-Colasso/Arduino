/*
	Projeto: Projeto Monitor Serial
    Cliente: SENAI-Timbó
    Projetista: William Colasso Pereira
    Data: 26/06/2024
    
    Resumo: Projeto aprendendo a usar o monitor Serial
    
*/

//Definição de constantes

#define Cafeteira 2 				//Define o led na porta especificada
#define TempoLeitura 3000			//Define o tempo de leitura

void setup(){					//Inicializa o sistema
	pinMode(Cafeteira, OUTPUT);	//Inicializa o LED como saída
  	Serial.begin(9600);			//Define Monitor Serial com uma taxa especificada em bps
}

void loop(){							//Programação em loop
  Serial.println("================");	//Inicio do banner
  Serial.print("Estado da cafeteira: ");//Imprime na tela 
  digitalWrite(Cafeteira,HIGH);			//Liga a cafeteira
  Serial.println("Cafeteira ligada!");	//Imprime na tela e pula a linha
										//Final do banner
  delay(TempoLeitura);					//Delay para a leitura
}
