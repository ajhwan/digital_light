const int LED = 13;

void setup() {
  pinMode(LED, OUTPUT);
  //digitalWrite(LED, HIGH);
  //digitalWrite(LED, LOW);
}

void loop() {
  for (int t_high = 0; t_high<=10;t_high++){
    int cnt = 0;
    while(true) {
      digitalWrite(LED, HIGH);
      delay(t_high);
      digitalWrite(LED, LOW);
      delay(10-t_high);
      cnt++;
      if (cnt == 10) break;
    }
  }
  //digitalWrite(LED, HIGH);
  //delay(9);
  //digitalWrite(LED, LOW);
  //delay(1);
}
