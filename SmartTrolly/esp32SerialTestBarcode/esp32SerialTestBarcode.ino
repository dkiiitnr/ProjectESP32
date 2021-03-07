//#define RXD2 16
//#define TXD2 17
String receive_buffer;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial2.begin(9600);
}

void loop()
{
  
// while(Serial2.available()) // Keep reading Byte by Byte from the Buffer till the Buffer is empty
//   {
  
  if (Serial2.available()>0)
  {
     receive_buffer = Serial2.readString(); 
     Serial.print("received data is: ");
     Serial.println(receive_buffer);   
  }
//  receive_buffer = "";
}

//}
