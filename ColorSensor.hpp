#ifndef _SPIKEAPI_COLOR_SENSOR_H
#define _SPIKEAPI_COLOR_SENSOR_H

#include "spike/pup/colorsensor.h"

namespace spikeapi {
class ColorSensor {
public:
  pup_device_t *device;

public:
  ColorSensor(pbio_port_id_t port);

  pup_color_rgb_t get_rgb();

  pup_color_hsv_t get_color(bool surface);

  pup_color_hsv_t get_hsv(bool surface);

  int32_t get_reflection();

  int32_t get_ambient();
};

ColorSensor::ColorSensor(pbio_port_id_t port) {
  device = pup_color_sensor_get_device(port);
}

} // namespace spikeapi

#endif
