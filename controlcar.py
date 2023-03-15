from adafruit_motorkit import MotorKit
kit = MotorKit()

def set_motor_speed(motor_num, speed):
    motor = kit.motors[motor_num]
    motor.throttle = speed

set_motor_speed(1, 0.2)
set_motor_speed(2, 0.2)
set_motor_speed(3, 0.2)
set_motor_speed(4, 0.2)