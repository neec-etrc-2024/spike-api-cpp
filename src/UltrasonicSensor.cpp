#include "UltrasonicSensor.hpp"

namespace spikeapi {

int32_t UltrasonicSensor::get_distance() {
  return pup_ultrasonic_sensor_distance(this->device);
}

bool UltrasonicSensor::get_presence() {
  return pup_ultrasonic_sensor_presence(this->device);
}
} // namespace spikeapi
