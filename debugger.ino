void setup() {
  Serial.begin(9600);
}

void loop() {
  int num = 1+2;
  int num1 = 2*4;
  int num2 = 5+2*2;
  Serial.print("Hello Xybernetics : ");
  Serial.print(num);
  Serial.print(" | ");
  Serial.print(num1);
  Serial.print(" | ");
  Serial.println(num2);


  String combStr = "Combine String : " + String(num) + " | " + String(num1) + " | " + String(num2);
  Serial.println(combStr);

  delay(1000);
}
