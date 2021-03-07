#include "WiFi.h" // ESP32 WiFi include
#include "WiFiConfig.h" // My WiFi configuration.
String receive_barcode_id;
void setup() 
{
  Serial.begin(115200);
  Serial2.begin(9600);
  ConnectToWiFi();
}

void loop()
{
  if (Serial2.available()>0)
  {
     receive_barcode_id = Serial2.readString(); 
     Serial.print("received data is: ");
     Serial.println(receive_barcode_id);   
  }
}
