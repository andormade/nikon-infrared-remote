#define IR_LED_PIN 5

void setup() {
  pinMode(IR_LED_PIN, OUTPUT);
  doTheSequence();
}

void doTheSequence() {
  doTheBurst(76);
  delay(27);
  delayMicroseconds(810);
  doTheBurst(16);
  delayMicroseconds(1540);
  doTheBurst(16);
  delayMicroseconds(3545);
  doTheBurst(16);
}

void doTheBurst(int count) {
  for (int i = 0; i < count; i++) {
    digitalWrite(IR_LED_PIN, HIGH);
    delayMicroseconds(7);
    digitalWrite(IR_LED_PIN, LOW);
    delayMicroseconds(7);
  }
}

void loop() {
}
