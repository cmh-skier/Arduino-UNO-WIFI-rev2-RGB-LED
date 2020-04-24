#include <WiFiNINA.h>
#include <utility/wifi_drv.h>
void setup()
{
  WiFiDrv::pinMode(25, OUTPUT); //RED
  WiFiDrv::pinMode(26, OUTPUT); //GREEN
  WiFiDrv::pinMode(27, OUTPUT); //BLUE
}
void loop()
{
  WiFiDrv::digitalWrite(25, HIGH);
  WiFiDrv::digitalWrite(26, HIGH);
  WiFiDrv::digitalWrite(27, HIGH);
  delay(500);
  WiFiDrv::digitalWrite(25, LOW);
  WiFiDrv::digitalWrite(26, LOW);
  WiFiDrv::digitalWrite(27, LOW);
  delay(500);
}   
