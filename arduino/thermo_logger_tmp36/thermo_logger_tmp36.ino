// arduino/thermo_logger_tmp36/thermo_logger_tmp36.ino
void setup() {
  Serial.begin(115200);
}

void loop() {
  int raw = analogRead(A0);
  float v = raw * (5.0 / 1023.0);     // Convert ADC to volts
  float tempC = (v - 0.5) * 100.0;    // TMP36: 10 mV/°C with 500 mV offset
  Serial.print("T,");
  Serial.println(tempC, 2);
  delay(200);
}
