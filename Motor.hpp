#ifndef _SPIKEAPI_MOTOR_H
#define _SPIKEAPI_MOTOR_H

#include "spike/pup/motor.h"

namespace spikeapi {
class Motor {
private:
  pup_motor_t *dev_ptr;

public:
  Motor(pbio_port_id_t port);

  void setup(pup_direction_t positive_direction, bool reset_count = true);

  void reset_count();

  int32_t get_count();

  int32_t get_speed();

  void set_speed(int speed);

  int32_t get_power();

  void set_power(int power);

  void stop();

  void brake();

  void hold();

  bool is_stalled();

  void set_duty_limit(int duty_limit);

  void restore_duty_limit(int old_value);
};

Motor::Motor(pbio_port_id_t port) { dev_ptr = pup_motor_get_device(port); }

} // namespace spikeapi
#endif
