const int temperatura=A5, svet=9;

void setup (){



Serial.begin(9600);

}


void loop (){

  int current = analogRead(temperatura);

  float voltage = (current * 5.0)/1024.0;

  
 Serial.print(voltage); Serial.println(" вольты");

 float tempC = voltage *100;

Serial.print (tempC); Serial.println ("температура");
delay (1000);
}