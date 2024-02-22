#define Right_Forward 18
#define Right_Reverse 8
#define Left_Forward 6
#define Left_Reverse 5

void setup() {
  // put your setup code here, to run once:
  pinMode(Right_Forward, OUTPUT);
  pinMode(Left_Forward, OUTPUT);
  pinMode(Right_Reverse, OUTPUT);
  pinMode(Right_Reverse, OUTPUT);

  Serial.begin(115200);

  digitalWrite(Right_Forward, HIGH);
  digitalWrite(Right_Reverse, LOW);
  digitalWrite(Left_Forward, HIGH);
  digitalWrite(Left_Reverse, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
}
