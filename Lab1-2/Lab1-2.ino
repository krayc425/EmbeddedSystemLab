const int buttonNum = A5;
const int ledNum = 13;
int ledState = HIGH;
int buttonState;
int lastButtonState = LOW;
long lastOperationTime = 0;
long delayTime = 100;//连续按的间隔如果小于0.1秒，灯的状态不会变化


void setup() {
  pinMode(buttonNum, INPUT);
  pinMode(ledNum, OUTPUT);
  digitalWrite(ledNum, ledState);
}


void loop() {
  int reading = digitalRead(buttonNum);
  if (reading != lastButtonState) {
    lastOperationTime = millis();
  }
  if ((millis() - lastOperationTime) > delayTime) {
    if (reading != buttonState) {
      buttonState = reading;
      ledState = !ledState;
    }
  }
  digitalWrite(ledNum, ledState);
  lastButtonState = reading;
}

