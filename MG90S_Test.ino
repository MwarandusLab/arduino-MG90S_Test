#include <ESP32Servo.h>

Servo servo_1; // servo controller (multiple can exist)

int servo_pin = 9; // GPIO pin for servo control on ESP32
int pos = 0;      // servo starting position

void setup() {
  Serial.begin(115200); // Start serial communication for debugging
  servo_1.attach(servo_pin); // Start servo control
  Motor();
}

void loop() {
  
}
void Motor(){
  for (pos = 0; pos <= 180; pos += 1) {
    servo_1.write(pos);
    delay(15);
    if (pos == 130) {
      delay(5000); // Wait 5 seconds once positioned at 90 degrees
    }
  }
}
