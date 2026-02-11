#include <DHT11.h>

DHT11 dht11 (10);

void setup (){

  Serial.begin(9600);
}

void loop (){

int temper = 0;
int vlag = 0;
int current = dht11.readTemperatureHumidity (temper,vlag);

if (current ==0){//функция работает так что если current == 0 то значит данные с датчика идут и их можно вывожить
// иначе данные останутсяь 0 0 
  Serial.print("температура"); Serial.println(temper);
  Serial.print("влажность"); Serial.println(vlag);
    Serial.print("current"); Serial.println(current);

  delay (300);

}else {
  Serial.print(DHT11::getErrorString(current));
}
}