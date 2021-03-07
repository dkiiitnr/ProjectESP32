#include "headers.h"
#include "definations.h"

void conect_to_wifi();
void reconnect();

char* ssid = "WorkFlo 2.4";
const char* password = "Work@OYO";
const char* database_server = "172.16.0.101";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(BAUDRATE);
  Serial2.begin(barcode_baudrate, SERIAL_8N1, RXD2, TXD2);
  connect_to_wifi();
  client.setServer(database_server, 1883);
   String barcode = scan_barcode();
  Serial.println(barcode);
}

void loop() {

 

}
