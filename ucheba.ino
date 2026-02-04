
const int led = 9, Button=3;
boolean lastButton =LOW; // предыдущее состояние кнопки 
boolean currentButton = LOW; // настоящее состояние кнопки 
boolean ledOn = false; // состояние индикаций 

void setup() {
pinMode (led, OUTPUT);
pinMode (Button,INPUT);

}

boolean ststus_button (boolean last){

  boolean current = digitalRead (Button);

  if (current != last){
    delay (5);
    return current; 
  }


}

void loop() {

  currentButton = ststus_button(lastButton);

  if (currentButton != lastButton){

    ledOn = !ledOn;

    lastButton = currentButton;

   digitalWrite (led,ledOn);
  }




}