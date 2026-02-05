
const int R = 12, G=11,B=10, Button=7;



boolean lastButton = LOW;
boolean currentButton = LOW;
int ststus_mode = 0;

void setup() {
pinMode (Button, INPUT);
pinMode (R, OUTPUT);
pinMode (G, OUTPUT);
pinMode (B, OUTPUT);

Serial.begin(9600);
}

boolean chekc_status(boolean last){
  
  boolean current = digitalRead (Button);

  if (current != last){
    delay (5);
    
    return current;
  }
}

void mode (int modes){

  if (modes == 0){
    digitalWrite (R,LOW);
    digitalWrite (B,LOW);
    digitalWrite (G,LOW);
  }

  else if (modes == 1){
  digitalWrite (R,HIGH);
  digitalWrite (G,LOW);
  digitalWrite (B,LOW);
}

  else if (modes == 2){
  digitalWrite (R,LOW);
  digitalWrite (G,HIGH);
  digitalWrite (B,LOW);
}
 
 else if (modes == 3){
  digitalWrite (R,LOW);
  digitalWrite (G,LOW);
  digitalWrite (B,HIGH);
}
}

void loop() {

  currentButton = chekc_status (lastButton);

  if (currentButton == HIGH && lastButton ==  LOW ){

    ststus_mode = 1 + ststus_mode;

  }
  
  lastButton = currentButton;// не забываем обновить сьаьус кнопки


  if (ststus_mode > 3){
    ststus_mode = 0;
    
  }
  mode(ststus_mode);

  

  Serial.print(currentButton);


}