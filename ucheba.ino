
const int led =9;
void setup() {
pinMode (9, OUTPUT);

}

void loop() {

for (int i=100; i<=1000000; i+=100){

  digitalWrite(led, HIGH);
  delay(i);
  digitalWrite(led,LOW);
  delay (i);

}



}
