/*
	Projeto: Leitura digital
    Contratante: SENAI - Timbó
    Projetista William Colasso Pereira
    Data: 03/07/2024 - Versão: 1.0
    
    Resumo: Ler e enviar para o monitor
    Serial o sinal digital enviado por um sensor.

*/

//	Definição de constantes

#define SENSOR1 11 			//Define a porta para o sensor
#define SENSOR2 12 			//Define a porta para o sensor
#define SENSOR3 13 			//Define a porta para o sensor
#define TEMPO_L 2000 		//Define o tempo de leitura do sensor

//	Definição das variáveis

bool valorSensor1 = HIGH;	//Define a variável que irá guardar o valor do sensor1
bool valorSensor2 = HIGH;	//Define a variável que irá guardar o valor do sensor2
bool valorSensor3 = HIGH;	//Define a variável que irá guardar o valor do sensor3


void setup()	//Função SETUP
{
  pinMode(SENSOR1, INPUT);	//Define o sensor como entrada
  pinMode(SENSOR2, INPUT);	//Define o sensor como entrada
  pinMode(SENSOR3, INPUT);	//Define o sensor como entrada
  Serial.begin(9600);		//Define a taxa de transmissão em bits
}

void loop()
{
  Serial.println("===STATUS SENSOR 1 ===");
  valorSensor1 = digitalRead(SENSOR1);			//Armazeno o valor lido no sensor para a variável
  Serial.print("=O valor atual do sensor 1:");	//Imprime no console
  Serial.println(valorSensor1);					//Imprime no console a variável
  delay(TEMPO_L);								//Delay de tempo de leitura
  Serial.println("===STATUS SENSOR 2 ===");		//Imprime no console
  valorSensor2 = digitalRead(SENSOR2);			//Armazeno o valor lido no sensor para a variável
  Serial.print("=O valor atual do sensor 2:");	//Imprime no console
  Serial.println(valorSensor2);					//Imprime no console a variável
  delay(TEMPO_L);								//Delay de tempo de leitura
  Serial.println("===STATUS SENSOR 3 ===");		//Imprime no console
  valorSensor3 = digitalRead(SENSOR3);			//Armazeno o valor lido no sensor para a variável
  Serial.print("=O valor atual do sensor 3:");	//Imprime no console
  Serial.println(valorSensor3);					//Imprime no console a variável
  delay(TEMPO_L);								//Delay de tempo de leitura
  
  Serial.print("\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n\r\n");  // Envie múltiplos retornos de carro e avanços de linha para rolar o conteúdo fora da tela
 
}



//Fim da programação
