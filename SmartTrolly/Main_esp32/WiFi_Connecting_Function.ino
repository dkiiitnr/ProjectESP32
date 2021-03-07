
void ConnectToWiFi()
{

  WiFi.mode(WIFI_STA);
  WiFi.begin(SSID, WiFiPassword);
  Serial.print("Connecting to ");
  Serial.println(SSID);

  uint8_t i = 0;
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print('.');
    delay(500);

    if ((++i % 16) == 0)
    {
      Serial.println(F("connecting "));
    }
  }

  Serial.print(F("Connected. My IP address is: "));
  Serial.println(WiFi.localIP());
}
