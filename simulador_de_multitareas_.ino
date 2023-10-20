byte led1 = 2;
byte led2 = 3;

unsigned long tiempo1 = 0;
unsigned long t1 = 0;
bool estadoLed1 = 0;

unsigned long tiempo2 = 0;
unsigned long t2 = 0;
bool estadoLed2 = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  tiempo1 = millis();
  
  if( (tiempo1 - t1 >= 1000)){
   t1 = tiempo1;
   estadoLed1 = !estadoLed1; 
  }
  
  digitalWrite(led1, estadoLed1);

  tiempo2 = millis();
  
  if( (tiempo2 - t2 >= 300)){
   t2 = tiempo2;
   estadoLed2 = !estadoLed2; 
  }
  
  digitalWrite(led2, estadoLed2);  
  
  Serial.println(tiempo1);
}
