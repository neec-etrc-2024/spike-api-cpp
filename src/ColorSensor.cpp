#include "ColorSensor.hpp"

namespace spikeapi {

pup_color_rgb_t ColorSensor::get_rgb() {
  return pup_color_sensor_rgb(this->device);
}

pup_color_hsv_t ColorSensor::get_color(bool surface) {
  return pup_color_sensor_color(this->device, surface);
}

pup_color_hsv_t ColorSensor::get_hsv(bool surface) {
  return pup_color_sensor_hsv(this->device, surface);
}

int32_t ColorSensor::get_reflection() {
  return pup_color_sensor_reflection(this->device);
}

int32_t ColorSensor::get_ambient() {
  return pup_color_sensor_ambient(this->device);
}
} // namespace spikeapi
