#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);

  digitalWrite(PIN_LED, 1);
  int count = 0;
}

void loop() {
  digitalWrite(PIN_LED, 0);
  delay(1000);
  int count = 0;

  while(1) {
    if (count < 5) {
      Serial.println(count);
      digitalWrite(PIN_LED, 1);
      delay(100);
      digitalWrite(PIN_LED, 0);
      delay(100);
      count++;
    }
    else {
      break;
    }
  }

  while (1) {
    digitalWrite(PIN_LED, 1);
  }
  
}
