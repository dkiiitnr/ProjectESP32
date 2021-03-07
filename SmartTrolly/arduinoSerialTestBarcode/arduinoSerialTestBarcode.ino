String receive_buffer;
void setup() {
  Serial.begin(9600);
  Serial1.begin(9600);
}

void loop() 
{
  if(Serial1.available()>0)  //check for any data received
  {   
      receive_buffer = Serial1.readString();  //read received data      
      Serial.print("received data is: ");
      Serial.println(receive_buffer);        //display received data
  }
}
