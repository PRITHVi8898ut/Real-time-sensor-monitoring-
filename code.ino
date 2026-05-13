const int tempPin = A0;
const int lightPin = A1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  int tempValue = analogRead(tempPin);

  
  float voltage = tempValue * (5.0 / 1023.0);

  
  float temperatureC = (voltage - 0.5) * 100;

  int lightValue = analogRead(lightPin);

  
  Serial.print("Temperature:");
  Serial.print(temperatureC);
  Serial.print("C | Light:");
  Serial.println(lightValue);

  Serial.print(temperatureC * 10);
  Serial.print(",");
  Serial.println(lightValue);

  delay(1000);
}