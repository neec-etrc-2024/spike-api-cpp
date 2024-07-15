/**
 * @file Hub.hpp
 * @brief Hub API
 * @author bukidaiF
 * @date 2024.7.12
 */
#ifndef _SPIKEAPI_HUB_H
#define _SPIKEAPI_HUB_H

#include "hub/button.h"
#include "spikeapi/AccelerometerData.hpp"
#include "spikeapi/GyroscopeData.hpp"

namespace spikeapi {
/**
 * @class Hub
 * @brief Hub API
 */
class Hub {
public:
  Hub();
  /**
   * @brief 初期化
   */
  void init();
  /**
   * @brief 3軸の加速度を取得する
   * @return 加速度データ
   */
  AccelerometerData get_acceleration();
  /**
   * @brief 3軸の角速度を取得する
   * @return 角速度データ
   */
  GyroscopeData get_angular_velocity();
  /**
   * @brief 温度を取得する
   * @return Hubの温度
   */
  float get_temperature();

  bool is_button_pressed(hub_button_t button);
};

Hub::Hub() {}

} // namespace spikeapi

#endif
