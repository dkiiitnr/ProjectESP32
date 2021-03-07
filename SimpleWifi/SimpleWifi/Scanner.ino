String scan_barcode()
{
  String barcode;
  if (Serial2.available())
  {
    barcode = Serial2.readString();
    Serial.println(barcode);
  }
  barcode = "";
  
  return barcode;
}
