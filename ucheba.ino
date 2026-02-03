
const int led =9, Button=2;

void setup() {
pinMode (led, OUTPUT);
pinMode (Button,INPUT);
}

void loop() {

if (digitalRead (Button) == LOW) {

  digitalWrite (led,LOW);
}
else {
  digitalWrite (led,HIGH);
}


}