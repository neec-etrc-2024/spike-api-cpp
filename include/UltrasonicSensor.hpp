/**
 * @file UltrasonicSensor.hpp
 * @brief Ultrasonic Sensor API
 * @author bukidaiF
 * @date 2024.7.12
 */
#ifndef _SPIKEAPI_ULTRASONIC_SENSOR_H
#define _SPIKEAPI_ULTRASONIC_SENSOR_H

extern "C" {
#include "spike/pup/ultrasonicsensor.h"
}

namespace spikeapi {
class UltrasonicSensor {
private:
  pup_device_t *device;

public:
  /**
   * @brief Constructor
   * @param port PUP port ID of the device
   */
  UltrasonicSensor(pbio_port_id_t port);
  /**
   * @brief Get the distance by a ultrasonic sensor
   * @return Distance in centimeters
   */
  int32_t get_distance();
  /**
   * @brief Get the presence of an object
   * @return Presence of an object
   */
  bool get_presence();
};

inline UltrasonicSensor::UltrasonicSensor(pbio_port_id_t port) {
  device = pup_ultrasonic_sensor_get_device(port);
}

} // namespace spikeapi
#endif
