#include <IRremote.h>
 
int RECV_PIN = 13;
int LED_1 = 9;
int LED_2 = 10;
int LED_3 = 12;

IRrecv irrecv(RECV_PIN);
decode_results results;
 
#define BUTON0 0xFF6897
#define BUTON1 0xFF30CF
#define BUTON2 0xFF18E7
#define BUTON3 0xFF7A85
#define BUTON4 0xFF10EF
#define BUTON5 0xFF38C7

void setup()
{
  pinMode(LED_1, OUTPUT);
  irrecv.enableIRIn();
}
void loop() {
  if (irrecv.decode(&results))
  {
    if (results.value == BUTON1)
    {digitalWrite(LED_1, HIGH);}
    
    if (results.value == BUTON0)
    {digitalWrite(LED_1, LOW);}

    if (results.value == BUTON2)
    {digitalWrite(LED_2, HIGH);}
    
    if (results.value == BUTON3)
    {digitalWrite(LED_2, LOW);}

    if (results.value == BUTON4)
    {digitalWrite(LED_3, HIGH);}
    
    if (results.value == BUTON5)
    {digitalWrite(LED_3, LOW);}
    
    irrecv.resume();
  }
}
