int ir_sensor;

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
    digitalWrite(12, HIGH);

}

void loop() {
    ir_sensor = analogRead(A0);
    if (ir_sensor < 30) {
      digitalWrite(13, HIGH);

    } else {
      digitalWrite(13, LOW);

    }
    Serial.print("Sensor Value: ");
     Serial.println(ir_sensor);
     delay(200);

}
