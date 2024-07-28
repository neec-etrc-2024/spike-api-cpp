#include "Hub.hpp"

extern "C" {
#include "spike/hub/imu.h"
}

namespace spikeapi {

void Hub::init() { hub_imu_init(); }

AccelerometerData Hub::get_acceleration() {
  float accel[3];
  hub_imu_get_acceleration(accel);
  AccelerometerData data = {accel[0], accel[1], accel[2]};
  return data;
}

GyroscopeData Hub::get_angular_velocity() {
  float angv[3];
  hub_imu_get_angular_velocity(angv);
  GyroscopeData data = {angv[0], angv[1], angv[2]};
  return data;
}

float Hub::get_temperature() { return hub_imu_get_temperature(); }

bool Hub::is_button_pressed(hub_button_t button) {
  hub_button_t pressed;
  hub_button_is_pressed(&pressed);
  return (pressed & button) != 0;
}

} // namespace spikeapi
