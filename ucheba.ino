const int potenc=A5;

void setup (){

pinMode (potenc, INPUT);

Serial.begin(9600);

}


void loop (){

  int current = analogRead(potenc);
  Serial.println (current);
  delay (500);
}