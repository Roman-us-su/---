const int potenc=A5, svet=9;

void setup (){

pinMode (potenc, INPUT);
pinMode (svet,OUTPUT);

Serial.begin(9600);

}


void loop (){

  int current = analogRead(potenc)/4;
  
  analogWrite (svet,current);
  Serial.print (current);
  Serial.print ("\t");
  Serial.println(svet);

}