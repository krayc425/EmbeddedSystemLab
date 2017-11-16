const int buttonPin = A0; 
const int ledPin = 13;
int buttonState = 0; 
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600); 
}
// 初始化LED为输出模式 //初始化 按钮模块为输 模式
void loop(){
  buttonState =analogRead(buttonPin);// 读取按键状态 delay(1000);
  // 检查按键是否被按下
  if(buttonState == LOW) {
    digitalWrite(ledPin, HIGH);// 点亮LED Serial.print("buttonState = ");
    Serial.println(buttonState); 
  } else {
    digitalWrite(ledPin, LOW);//熄灭LED
    Serial.print("buttonState = ");
    Serial.println(buttonState); 
  }
}
