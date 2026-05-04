#define buad 9600
int counter  = 0;
void setup() 
{
  Serial.begin(buad);
}
  

void loop() 
{
  Serial.write(counter);
  counter++;
  delay(1000);
}
