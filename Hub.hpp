#ifndef _SPIKEAPI_HUB_H
#define _SPIKEAPI_HUB_H

#include "spikeapi/AccelerometerData.hpp"
#include "spikeapi/GyroscopeData.hpp"

namespace spikeapi {
class Hub {
public:
  Hub();

  void init();

  AccelerometerData get_acceleration();

  GyroscopeData get_angular_velocity();

  float get_temperature();
};

Hub::Hub() {}

} // namespace spikeapi

#endif
