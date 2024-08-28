/*
	Projeto: Leitura LDR
    Cliente: SENAI - Timbó
    Projetista: William Colass Pereira	
    Data:28/08/24
    
    Resumo: Código para leitura de sensor LDR

*/
// Definição de constantes
#define SENSOR1 A0	//Define a entrada analógica do SENSOR 1
#define SENSOR2 A1	//Define a entrada analógica do SENSOR 2
#define TL 1000		//Define a entrada ana 

//Definição de Variaáveis
int valorSensor1 = 0 ;	//Define a variável do sensor 1
int valorSensor2 = 0 ;	//Define a variável do sensor 2

void setup()			//Inicializa o sistema
{
    pinMode(SENSOR1, INPUT);	//Define o SENSOR 1 como entrada analogica
    pinMode(SENSOR2, INPUT);	//Define o SENSOR 1 como entrada analogica
    Serial.begin(9600);		//Inicializa o monitor serial com 9600 bps
}

void loop()
{
    delay(TL);                            //Intervalo de leitura
    valorSensor1 = analogRead(SENSOR1);   //Armazena o valor lido do SENSOR 1
    valorSensor2 = analogRead(SENSOR2);   //Armazena o valor lido do SENSOR 2

    Serial.println("---------------------");  //Escreve string
    Serial.println("Valor dos Sensores");     //Escreve string
    Serial.println("---------------------");  //Escreve string
    Serial.println("Valor do sensor 1:");    //Escreve string
    Serial.println(valorSensor1);            //Escreve valor contido na variavel do SENSOR1
    Serial.println("Valor do sensor 2:");    //Escreve string
    Serial.println(valorSensor2);            //Escreve valor contido na variavel do SENSOR1

}