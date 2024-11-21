const int green = 12;
const int red = 13;
const int openB = 3;
const int closeB = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(openB, INPUT);
  pinMode(openB, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int openBtn = digitalRead(openB);
  int closeBtn = digitalRead(openB);

  digitalWrite(red, HIGH);
  Serial.println('0');

  if (openBtn == HIGH) {
    Serial.println('1');
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    if (closeBtn == HIGH) {
      Serial.println('2');
      digitalWrite(green, LOW);
      digitalWrite(red, HIGH);
    }
  }
}
