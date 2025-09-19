#define PIN_LED 7

void loop() {
  Serial.println(++count);
  digitalWrite(PIN_LED, toggle); // update LED status.
  delay(1000); // wait for 1,000 milliseconds
}

int toggle_state(int toggle) {
  toggle = 1 - toggle;
  return toggle;
}
