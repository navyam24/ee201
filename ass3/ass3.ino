int val = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(12);
  if (val == 1) {
    Serial.println("Hello World!");
    delay(1500);
  } else if (val == 0) {
    Serial.println("It's 2023");
    delay(1500);
  }

}