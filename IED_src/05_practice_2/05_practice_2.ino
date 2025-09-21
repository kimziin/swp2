#define PIN_LED 7
unsigned int toggle;

void setup(){
  pinMode(PIN_LED, OUTPUT);
  toggle = 0;
}

void loop() {
  digitalWrite(PIN_LED, toggle); 
  delay(1000);

  for (int i = 0; i < 5; i++) {
    toggle = toggle_state(toggle);
    digitalWrite(PIN_LED, toggle);
    delay(100);
    toggle = toggle_state(toggle);
    digitalWrite(PIN_LED, toggle);
    delay(100);
  }
  digitalWrite(PIN_LED,1);

  while (1){
    
  }
}

int toggle_state(int toggle) {
  toggle = 1 - toggle;
  return toggle;
}
