void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  
  while (!Serial);
  // wait for serial port to connect
}

void loop() {
        char incomingByte;
        // send data only when you receive data:
        if (Serial.available() > 0) {
                incomingByte = Serial.read();
                if(incomingByte == '1') {
                  digitalWrite(13, HIGH);
                } else if(incomingByte == '0') {
                  digitalWrite(13, LOW);
                }
//                Serial.print("Got: ");
//                Serial.println(incomingByte);
        }
        
}
