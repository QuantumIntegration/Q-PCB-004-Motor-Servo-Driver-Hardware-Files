#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

void setup() {

  pwm.begin();
  pwm.setPWMFreq(1000);

  Wire.setClock(100000);
}

void loop() {
  pwm.setPWM(0, 4096, 0);       // turns pin fully on
  pwm.setPWM(1, 4096, 0);       // turns pin fully on
  pwm.setPWM(2, 4096, 0);       // turns pin fully on
  pwm.setPWM(3, 4096, 0);       // turns pin fully on
  pwm.setPWM(4, 4096, 0);       // turns pin fully on
  pwm.setPWM(5, 0, 4096);       // turns pin fully off
  pwm.setPWM(6, 4096, 0);       // turns pin fully on
  pwm.setPWM(7, 0, 4096);       // turns pin fully off
  pwm.setPWM(8, 4096, 0);       // turns pin fully on
  pwm.setPWM(9, 0, 4096);       // turns pin fully off
  pwm.setPWM(10, 4096, 0);       // turns pin fully on
  pwm.setPWM(11, 0, 4096);       // turns pin fully off
  pwm.setPWM(12, 4096, 0);       // turns pin fully on
  pwm.setPWM(13, 4096, 0);       // turns pin fully on
  pwm.setPWM(14, 4096, 0);       // turns pin fully on
  pwm.setPWM(15, 4096, 0);       // turns pin fully on

  delay(1000);

  pwm.setPWM(0, 0, 4096);       // turns pin fully off
  pwm.setPWM(1, 0, 4096);       // turns pin fully off
  pwm.setPWM(2, 0, 4096);       // turns pin fully off
  pwm.setPWM(3, 0, 4096);       // turns pin fully off
  pwm.setPWM(4, 0, 4096);       // turns pin fully off
  pwm.setPWM(5, 0, 4096);       // turns pin fully off
  pwm.setPWM(6, 0, 4096);       // turns pin fully off
  pwm.setPWM(7, 0, 4096);       // turns pin fully off
  pwm.setPWM(8, 0, 4096);       // turns pin fully off
  pwm.setPWM(9, 0, 4096);       // turns pin fully off
  pwm.setPWM(10, 0, 4096);       // turns pin fully off
  pwm.setPWM(11, 0, 4096);       // turns pin fully off
  pwm.setPWM(12, 0, 4096);       // turns pin fully off
  pwm.setPWM(13, 0, 4096);       // turns pin fully off
  pwm.setPWM(14, 0, 4096);       // turns pin fully off
  pwm.setPWM(15, 0, 4096);       // turns pin fully off

  delay(1000);
}
