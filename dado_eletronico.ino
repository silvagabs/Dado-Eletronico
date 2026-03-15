int pinoBotao = 8;
int numeroSorteado;

void setup()
{
  for (int i = 2; i <= 7; i++) {
    pinMode(i, OUTPUT);
  }
  
  pinMode(pinoBotao, INPUT_PULLUP);
  
  randomSeed(analogRead(A0));
}

void loop()
{
   if (digitalRead(pinoBotao) == LOW) {
    
    numeroSorteado = random(1, 7);

     delay(200);
   }
  
  if (numeroSorteado >= 1 && numeroSorteado <= 6){
     
  switch (numeroSorteado){
    
    
     case 1:
        digitalWrite(2, HIGH);  
        break;
        
      case 2:
        digitalWrite(2, HIGH);
        digitalWrite(7, HIGH);  
        break;
        
      case 3:
        digitalWrite(2, HIGH);
        digitalWrite(4, HIGH);  
        digitalWrite(7, HIGH);
        break;
        
      case 4:
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        break;
        
      case 5:
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);  
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        break;
        
      case 6:
        digitalWrite(2, HIGH);
        digitalWrite(3, HIGH);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        break;
    
  }
    
    delay(4000);
    
     for (int i = 2; i <= 7; i++) {
      digitalWrite(i, LOW);
    }
    
    numeroSorteado = 0;
   
    delay(500);
        
  }
  
}
