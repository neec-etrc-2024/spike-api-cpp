#ifndef _SPIKEAPI_ULTRASONIC_SENSOR_H
#define _SPIKEAPI_ULTRASONIC_SENSOR_H

#include "spike/pup/ultrasonicsensor.h"

namespace spikeapi {
class UltrasonicSensor {
private:
  pup_device_t *device;

public:
  UltrasonicSensor(pbio_port_id_t port);

  int32_t get_distance();

  bool get_presence();
};

UltrasonicSensor::UltrasonicSensor(pbio_port_id_t port) {
  device = pup_ultrasonic_sensor_get_device(port);
}

} // namespace spikeapi
#endif
