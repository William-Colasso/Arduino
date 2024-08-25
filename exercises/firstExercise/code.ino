/*
	Projeto: Luizinha
    Cliente: SENAI-Timbó
    Projetista: William Colasso Pereira
    Data: 20/05/2024
    
    Resumo: Pisca-Pisca estrelinha
    
*/
void setup()		//Inicializa e define os valores iniciais
{
	pinMode(7,OUTPUT);		//Define a porta 7 como saída 
}

void loop()		//Incia-se o loop infinito
{
	digitalWrite(7,HIGH);	//Envio de pulso alto a porta 7
  	delay(1001);	//Espera durante 1 segundo e um milissegundo
  	digitalWrite(7,LOW);	//Envio de pulso baixo a porta 7
  	delay(2002);	 //Espera durante 2 segundos e dois milissegundo
}

		/*FIM DA PROGRAMAÇÃO*/