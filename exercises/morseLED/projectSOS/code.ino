/*
	Projeto: Projeto S.O.S
    Cliente: SENAI-Timbó
    Projetista: William Colasso Pereira
    Data: 27/05/2024
    
    Resumo: Projeto de ajuda com código morse
    
*/

#define tempo_Ponto 300 //O tempo de espera de um ponto é 300ms
#define tempo_Traco 800	//O tempo de espera de um traço é 800ms
#define tempo_Intervalo 1500	//O tempo de espera de uma letra para outra é 1500ms
#define tempo_Retransmissao 3000 //O tempo até o ciclo recomeçar é 3000ms
#define LED 2


void setup()
{
 pinMode(LED,OUTPUT);
}

void loop()
{
  digitalWrite(LED,HIGH);//Impulso Alto na porta 2
  delay(tempo_Ponto); 	//Espera o tempo de um ponto
  digitalWrite(LED,LOW);//Impulso Baixo na porta 2
  delay(tempo_Ponto);	//Espera o tempo de um ponto
  digitalWrite(LED,HIGH);//Impulso Alto na porta 2
  delay(tempo_Ponto);	//Espera o tempo de um ponto
  digitalWrite(LED,LOW);//Impulso Baixo na porta 2
  delay(tempo_Ponto);	//Espera o tempo de um ponto
  digitalWrite(LED,HIGH);//Impulso Alto na porta 2
  delay(tempo_Ponto);	//Espera o tempo de um ponto
  digitalWrite(LED,LOW);//Impulso Baixo na porta 2
  //3 Pontos = 'S'
  delay(tempo_Intervalo);
  
  digitalWrite(LED,HIGH);//Impulso Alto na porta 2
  delay(tempo_Traco);	//Espera o tempo de um traço
  digitalWrite(LED,LOW);//Impulso Baixo na porta 2
  delay(tempo_Traco);	//Espera o tempo de um traço
  digitalWrite(LED,HIGH);//Impulso Alto na porta 2
  delay(tempo_Traco);	//Espera o tempo de um traço
  digitalWrite(LED,LOW);//Impulso Baixo na porta 2
  delay(tempo_Traco);	//Espera o tempo de um traço
  digitalWrite(LED,HIGH);//Impulso Alto na porta 2
  delay(tempo_Traco);	//Espera o tempo de um traço
  digitalWrite(LED,LOW);//Impulso Baixo na porta 2
  //3 Traços = 'O'
  delay(tempo_Intervalo);//Espera o tempo do intervalo
  
  digitalWrite(LED,HIGH);//Impulso Alto na porta 2
  delay(tempo_Ponto); 	//Espera o tempo de um ponto
  digitalWrite(LED,LOW);//Impulso Baixo na porta 2
  delay(tempo_Ponto);	//Espera o tempo de um ponto
  digitalWrite(LED,HIGH);//Impulso Alto na porta 2
  delay(tempo_Ponto);	//Espera o tempo de um ponto
  digitalWrite(LED,LOW);//Impulso Baixo na porta 2
  delay(tempo_Ponto);	//Espera o tempo de um ponto
  digitalWrite(LED,HIGH);//Impulso Alto na porta 2
  delay(tempo_Ponto);	//Espera o tempo de um ponto
  digitalWrite(LED,LOW);//Impulso Baixo na porta 2
  //3 Pontos = 'S'
  //Resultado, 3 Pontos +3 Traços+3 Pontos = 'S'+'O'+'S'= "SOS"
  delay(tempo_Retransmissao); //Espera o tempo de retransmissão
  //Fim do loop
}