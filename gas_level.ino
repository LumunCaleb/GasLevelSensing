const int mq135Pin = A0;  // Digital pin connected to the MQ135 sensor

void setup() {
  Serial.begin(9600);
  pinMode(mq135Pin, INPUT);  // Set the pin mode to input
}

void loop() {
  int sensorValue = analogRead(mq135Pin);  // Read digital data from the sensor pin
  
  
    Serial.print("Gas value: ");  // Print a message if gas is detected
    Serial.println(sensorValue);
   
  delay(1000);  // Delay for 1 second
}