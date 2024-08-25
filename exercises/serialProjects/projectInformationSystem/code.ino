/*
	Projeto: Projeto Desenvolvimento de sistema de informações
    Cliente: SENAI-Timbó
    Projetista: William Colasso Pereira
    Data: 26/06/2024
    
    Resumo: Projeto aprendendo a usar o monitor Serial.
    		Fazendo uma pequena abstração de um situação real.
    
*/

//Definição de constantes

#define Exaustor 2 					//Define o led na porta especificada
#define Esteira 3					//Define o led na porta especificada
#define Triturador 4				//Define o led na porta especificada
#define Espaco 5 					//Define um espaço padrão entre os menus


void setup(){					//Inicializa o sistema
	pinMode(Exaustor, OUTPUT);	//Inicializa o LED como saída
  pinMode(Esteira, OUTPUT);	//Inicializa o LED como saída
  pinMode(Triturador, OUTPUT);	//Inicializa o LED como saída
  	Serial.begin(9600);			//Define Monitor Serial com uma taxa especificada em bps
}

void loop(){							//Programação em loop
  Serial.println("==================");	//Inicio do banner
  Serial.println("==     MENU     ==");	//Inicio do banner
  Serial.println("=Ligando exaustor=");	//Imprime na tela
  delay(1333);							//Espera uma certa quantida de milissegundos
  Serial.println("=.               =");	//Meio do Banner
  delay(1333);							//Espera uma certa quantida de milissegundos
  Serial.println("=..              =");	//Meio do Banner
  delay(1333);							//Espera uma certa quantida de milissegundos
  Serial.println("=...             =");	//Meio do Banner
  digitalWrite(Exaustor,HIGH);			//Liga o exaustor
  Serial.println("=Exaustor ligado!=");	//Imprime na tela e pula a linha
  Serial.println("==================");	//Final do banner
  
  pular(Espaco);
  
  
  Serial.println("==================");	//Inicio do banner
  Serial.println("==     MENU     ==");	//Inicio do banner
  Serial.println("=Ligando esteira =");	//Imprime na tela
  delay(1666);							//Espera uma certa quantida de milissegundos
  Serial.println("=.               =");	//Meio do Banner
  delay(1666);							//Espera uma certa quantida de milissegundos
  Serial.println("=..              =");	//Meio do Banner
  delay(1666);							//Espera uma certa quantida de milissegundos
  Serial.println("=...             =");	//Meio do Banner
  digitalWrite(Esteira,HIGH);			//Liga o exaustor
  Serial.println("=Esteira ligada !=");	//Imprime na tela e pula a linha

  
  pular(Espaco);
  
  Serial.println("====================");	//Inicio do banner
  Serial.println("==       MENU     ==");	//Inicio do banner
  Serial.println("=Ligando Triturador=");	//Imprime na tela
  delay(1000);								//Espera uma certa quantida de milissegundos
  Serial.println("=.                 =");	//Meio do Banner
  delay(1000);								//Espera uma certa quantida de milissegundos
  Serial.println("=..                =");	//Meio do Banner
  delay(1000);								//Espera uma certa quantida de milissegundos
  Serial.println("=...               =");	//Meio do Banner
  digitalWrite(Triturador,HIGH);			//Liga o exaustor
  Serial.println("=Triturador ligado!=");	//Imprime na tela e pula a linha
  Serial.println("==================");		//Final do banner

  pular(Espaco);								//Chama a função para pular linhas
  
  Serial.println("=======================");//Inicio do banner
  Serial.println("==        MENU       ==");//Inicio do banner
  Serial.println("=Desligando Triturador=");//Imprime na tela
  delay(1333);								//Espera uma certa quantida de milissegundos
  Serial.println("=.                    =");//Meio do Banner
  delay(1333);								//Espera uma certa quantida de milissegundos
  Serial.println("=..                   =");//Meio do Banner
  delay(1333);								//Espera uma certa quantida de milissegundos
  Serial.println("=...                  =");//Meio do Banner
  digitalWrite(Triturador,LOW);				//Liga o exaustor
  Serial.println("=Triturador desligado!=");//Imprime na tela e pula a linha
  Serial.println("==================");		//Final do banner
  
  pular(Espaco);								//Chama a função para pular linhas
  
  Serial.println("=====================");	//Inicio do banner
  Serial.println("==     MENU        ==");	//Inicio do banner
  Serial.println("=Desligando esteira =");	//Imprime na tela
  delay(666);								//Espera uma certa quantida de milissegundos
  Serial.println("=.                  =");	//Meio do Banner
  delay(666);								//Espera uma certa quantida de milissegundos
  Serial.println("=..                 =");	//Meio do Banner
  delay(666);								//Espera uma certa quantida de milissegundos
  Serial.println("=...                =");	//Meio do Banner
  digitalWrite(Esteira,HIGH);				//Liga o exaustor
  Serial.println("=Esteira Desligada !=");	//Imprime na tela e pula a linha
  
  pular(Espaco);								//Chama a função para pular linhas
  
  Serial.println("=====================");	//Inicio do banner
  Serial.println("==       MENU      ==");	//Inicio do banner
  Serial.println("=Desligando exaustor=");	//Imprime na tela
  delay(3333);								//Espera uma certa quantida de milissegundos
  Serial.println("=.                  =");	//Meio do Banner
  delay(3333);								//Espera uma certa quantida de milissegundos
  Serial.println("=..                 =");	//Meio do Banner
  delay(3333);								//Espera uma certa quantida de milissegundos
  Serial.println("=...                =");	//Meio do Banner
  digitalWrite(Exaustor,HIGH);				//Liga o exaustor
  Serial.println("=Exaustor desligado!=");	//Imprime na tela e pula a linha
  Serial.println("==================");		//Final do banner
  Serial.print("FIM!");						//Imprime o fim do programa
  
  pular(Espaco);								//Chama a função para pular linhas
  
  
}


void pular(int quantidade){			//Função para pular linhas
 
  for(int i =0;i<quantidade;i++){	//Loop for, para repetir a quantidade especificada
    Serial.println("");				//Imprime uma linha em branco
  }
}

//Fim da programação
