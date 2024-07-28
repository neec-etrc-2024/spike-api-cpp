/**
 * @file Motor.hpp
 * @brief Motor API
 * @author bukidaiF
 * @date 2024.7.12
 */
#ifndef _SPIKEAPI_MOTOR_H
#define _SPIKEAPI_MOTOR_H

extern "C" {
#include "spike/pup/motor.h"
}

namespace spikeapi {
/**
 * @class Motor
 * @brief Motor API
 */
class Motor {
private:
  pup_motor_t *dev_ptr;

public:
  /**
   * @brief Constructor
   * @param port PUP port ID of the device
   */
  Motor(pbio_port_id_t port);
  /**
   * @brief Setup the motor
   * @param positive_direction モータを回す方向
   * @param reset_count 回転数をリセットするかどうか
   */
  void setup(pup_direction_t positive_direction, bool reset_count = true);
  /**
   * @brief 回転数をリセットする
   */
  void reset_count();
  /**
   * @brief モータの回転数を取得する
   * @return モータの回転数
   */
  int32_t get_count();
  /**
   * @brief モータの速度を取得する
   * @return モータの速度
   */
  int32_t get_speed();
  /**
   * @brief モータの速度を設定する
   * @param speed 速度
   */
  void set_speed(int speed);
  /**
   * @brief モータのパワーを取得する
   * @return モータのパワー
   */
  int32_t get_power();
  /**
   * @brief モータのパワーを設定する
   * @param power パワー
   */
  void set_power(int power);
  /**
   * @brief モータを停止させる
   */
  void stop();
  /**
   * @brief モータをブレーキさせる
   * @param brake ブレーキをかけるかどうか
   */
  void brake();
  /**
   * @brief モータを保持する
   * @param hold 保持するかどうか
   */
  void hold();
  /**
   * @brief モータが停止しているかどうか
   * @return 停止しているかどうか
   */
  bool is_stalled();
  /**
   * @brief モータのデューティー比を設定する
   * @param duty_limit デューティー比
   */
  void set_duty_limit(int duty_limit);
  /**
   * @brief モータのデューティー比を取得する
   * @return デューティー比
   */
  void restore_duty_limit(int old_value);
};

inline Motor::Motor(pbio_port_id_t port) {
  dev_ptr = pup_motor_get_device(port);
}

} // namespace spikeapi
#endif
