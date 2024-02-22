#define Right_Forward 18
#define Right_Reverse 8
#define Left_Forward 6
#define Left_Reverse 5

void setup() {
  pinMode(Right_Forward, OUTPUT);
  pinMode(Left_Forward, OUTPUT);
  pinMode(Right_Reverse, OUTPUT);
  pinMode(Left_Reverse, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // drive forward
  digitalWrite(Right_Forward, HIGH);
  digitalWrite(Right_Reverse, LOW);
  digitalWrite(Left_Forward, HIGH);
  digitalWrite(Left_Reverse, LOW);
  delay(2000); // drive forward for 2 seconds (2000 ms = 2 seconds)

  // stop
  digitalWrite(Right_Forward, LOW);
  digitalWrite(Left_Forward, LOW);
  // no need to change the reverse pins since motors are stopped
  delay(1000); // stop for 1 second, adjust the stop duration if desired

  // turn right - by moving the right wheels forward and stopping the left wheels
  digitalWrite(Right_Forward, HIGH);
  digitalWrite(Left_Forward, LOW); // stop the left motor to turn right
  delay(1500); // turn right for 1.5 seconds

  digitalWrite(Left_Forward, HIGH);
  delay(3000); // drive forward for 3 seconds

  // stop after driving forward
  digitalWrite(Right_Forward, LOW);
  digitalWrite(Left_Forward, LOW);

  // after the action is complete, stop the loop to prevent repetition
  while(true) {
    // if you want the car to repeat the actions, remove this loop.
  }
}
