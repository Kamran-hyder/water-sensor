#include <DHT.h>
#include <DHT_U.h>


DHT dht(9, DHT11);

void setup() 
{
  Serial.begin(9600);
  dht.begin();
}

void loop() 
{
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Serial.println("Humidity: ");
  Serial.print(h);
  Serial.println(" %");
  Serial.println("Temperature: ");
  Serial.print(t);
  Serial.println(" *C");
  delay(1000);
}
