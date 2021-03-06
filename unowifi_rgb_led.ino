#include <WiFiNINA.h>
#include <utility/wifi_drv.h>
int led_max = 90;
int led_r = 0;
int rr = 1;
int led_g = 220;
int gr = 1;
int led_b =220;
int br = -1;
void setup()
{
  WiFiDrv::pinMode(25, OUTPUT); //RED
  WiFiDrv::pinMode(26, OUTPUT); //GREEN
  WiFiDrv::pinMode(27, OUTPUT); //BLUE
}
void loop()
{
  WiFiDrv::analogWrite(25, led_r);
  WiFiDrv::analogWrite(26, led_g);
  WiFiDrv::analogWrite(27, led_b);
  
  led_r += rr;
  led_g += gr;
  led_b += br;
  if(0 >= led_r or led_r >= led_max) rr *= -1;
  if(0 >= led_g or led_g >= led_max) gr *= -1;
  if(0 >= led_b or led_b >= led_max) br *= -1;
  delay(20);
}   
