void setup()
{
	pinMode(8, OUTPUT);
  	pinMode(9, OUTPUT);
  	pinMode(10, OUTPUT);
  	pinMode(11, OUTPUT);
  	pinMode(12, OUTPUT);
}

void loop()
{	
  semafaro();    
}

void semafaro(){
  
	digitalWrite(8, HIGH);
    delay(10000);//espera por 15000 milissegundos
  	digitalWrite(9, HIGH);
  	delay(5000);//espera por 5000 milissegundos
  	digitalWrite(9, LOW);
  	digitalWrite(8, LOW);
  	
  //led verde dos carros aceso
  	digitalWrite(10, HIGH);
  //led vermelho do pedrestre aceso
  	digitalWrite(12, HIGH);
    delay(10000);//espera por 10000 milissegundos
  	digitalWrite(9, HIGH);
  
  	
  	delay(1000);//espera por 1000 milissegundos
  
  //led piscar
  	noTone(11);
  	tone(11, 800, 500);
  	delay(1000);//espera por 1000 milissegundos
  	noTone(11);
  	tone(11, 800, 500);
  	digitalWrite(12, LOW);
  	delay(1000);//espera por 1000 milissegundos
  	noTone(11);
  	tone(11, 800, 500);
  	digitalWrite(12, HIGH);
  	delay(1000);//espera por 1000 milessegundos
  	noTone(11);
  	tone(11, 800, 500);
  	digitalWrite(12, LOW);
  	delay(1000);//espera por 1000 milessegundos
  	noTone(11);
    
    //Desativa o buzzer
    
  
  	digitalWrite(9, LOW);
  	digitalWrite(10, LOW);
  	
  
}
