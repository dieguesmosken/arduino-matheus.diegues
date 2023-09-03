int potenc = 5;
float sinal;
// pinos cores
int azul = 4;
int verd = 3;
int verm = 6;

//setup
void setup()
{
  
  Serial.begin(9600);
  
}
//loop
void loop()
{
  sinal = analogRead(potenc);
  Serial.println(sinal);
  //led azul
  if(sinal >= 0 && sinal <400){
  		digitalWrite(azul, HIGH);
  }else{
  		digitalWrite(azul, LOW);
  }
  //led verde
  if(sinal > 400 && sinal <800){
  		digitalWrite(verd, HIGH);
  }else{
  		digitalWrite(verd, LOW);
  }
  //led vermeljo
  if(sinal > 800){
  		digitalWrite(verm, HIGH);
  }else{
  		digitalWrite(verm, LOW);
  }
  
}