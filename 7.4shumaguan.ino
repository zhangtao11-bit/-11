
int a;

void setup()
{
  
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3,OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
      if(Serial.available())
    {
      a = Serial.read();
      read1(a);
    }
}

void read1(int a)
{
  switch(a)
  {
  	case '0':
    	
      digitalWrite(3,LOW);
      delay(100);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      break;
      
    case '1':
     
      digitalWrite(7,HIGH);
      delay(100);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(3,LOW);
      digitalWrite(6,HIGH);
      break;
      
    case '2':
    
      digitalWrite(3,LOW);
      delay(100);
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      break;
      
    case '3':
      digitalWrite(3,LOW);
      delay(100);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      break;
      
    case '4':
      digitalWrite(5,HIGH);
      delay(100);
      digitalWrite(4,LOW);
      digitalWrite(3,LOW);
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      break;
      
    case '5':
      digitalWrite(3,LOW);
      delay(100);
      digitalWrite(6,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(5,LOW);
      break;
      
    case '6':
      digitalWrite(3,LOW);
      delay(100);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(7,LOW);
      break;
      
    case '7':
      digitalWrite(3,LOW);
      delay(100);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(7,HIGH);
      break;
      
    case '8':
      digitalWrite(3,LOW);
      delay(100);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(7,LOW);
      break;
      
    case '9':
      digitalWrite(3,LOW);
      delay(100);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      break;
  }
}
