#include <LiquidCrystal_I2C.h>
#include <dht11.h> // dht11 kütüphanesini ekliyoruz.
#define DHT11PIN 8 // DHT11PIN olarak Dijital 2'yi belirliyoruz.
dht11 DHT11;
LiquidCrystal_I2C lcd(0x27,16,2);

void setup()
{
  lcd.begin();
}

void loop()
{
  
  // Bir satır boşluk bırakıyoruz serial monitörde.

  // Sensörün okunup okunmadığını konrol ediyoruz. 
  // chk 0 ise sorunsuz okunuyor demektir. Sorun yaşarsanız
  // chk değerini serial monitörde yazdırıp kontrol edebilirsiniz.
  int chk = DHT11.read(DHT11PIN);
  lcd.setCursor(0,0);
  lcd.print("Hum: ");
  lcd.print("%");
  lcd.print((float)DHT11.humidity, 2);
  lcd.setCursor(0,1);
  lcd.print("Temp: ");
  lcd.print((float)DHT11.temperature, 2);
  lcd.print(" C");
  Serial.print("Nem (%): ");
  Serial.println((float)DHT11.humidity, 2);
  Serial.print("Sicaklik (Santigrat): ");
  Serial.println((float)DHT11.temperature, 2); 

  delay(4000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Berk Onder"); 
  delay(4000);
}
