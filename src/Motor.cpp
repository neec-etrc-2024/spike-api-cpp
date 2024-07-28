#include "Motor.hpp"

namespace spikeapi {

void Motor::setup(pup_direction_t positive_direction, bool reset_count) {
  pup_motor_setup(this->dev_ptr, positive_direction, reset_count);
}

void Motor::reset_count() { pup_motor_reset_count(this->dev_ptr); }

int32_t Motor::get_count() { return pup_motor_get_count(this->dev_ptr); }

int32_t Motor::get_speed() { return pup_motor_get_speed(this->dev_ptr); }

void Motor::set_speed(int speed) { pup_motor_set_speed(this->dev_ptr, speed); }

int32_t Motor::get_power() { return pup_motor_get_power(this->dev_ptr); }

void Motor::set_power(int power) { pup_motor_set_power(this->dev_ptr, power); }

void Motor::stop() { pup_motor_stop(this->dev_ptr); }

void Motor::brake() { pup_motor_brake(this->dev_ptr); }

void Motor::hold() { pup_motor_hold(this->dev_ptr); }

bool Motor::is_stalled() { return pup_motor_is_stalled(this->dev_ptr); }

void Motor::set_duty_limit(int duty_limit) {
  pup_motor_set_duty_limit(this->dev_ptr, duty_limit);
}

void Motor::restore_duty_limit(int old_value) {
  pup_motor_restore_duty_limit(this->dev_ptr, old_value);
}
} // namespace spikeapi
