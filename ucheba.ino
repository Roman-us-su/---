
const int led =9;
void setup() {
pinMode (led, OUTPUT);

}

void loop() {

for (int i=0; i<256; i++){
  analogWrite (led,i);
  delay (50);
}

for (int i=255; i > 0; i--){

analogWrite (led,i);
delay (50);
}

}
