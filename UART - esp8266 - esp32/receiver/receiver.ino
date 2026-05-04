#define RX2 16
#define TX2 17
void setup() 
{
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, RX2, TX2);
}

void loop() 
{
  if (Serial2.available())
  {
    String data = Serial2.readStringUntil('\n');
    data.trim();
    Serial.print("Received: ");
    Serial.println(data);
  }
}