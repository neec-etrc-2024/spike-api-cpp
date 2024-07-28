/**
 * @file ColorSensor.hpp
 * @brief Color Sensor API
 * @author bukidaiF
 * @date 2024.7.12
 */
#ifndef _SPIKEAPI_COLOR_SENSOR_H
#define _SPIKEAPI_COLOR_SENSOR_H

extern "C" {
#include "spike/pup/colorsensor.h"
}

namespace spikeapi {

/**
 * @class ColorSensor
 * @brief Color Sensor API
 */
class ColorSensor {
public:
  pup_device_t *device;

public:
  /**
   * @brief ポートIDで指定されたカラーセンサへのPUPデバイスポインタを取得する。
   */
  ColorSensor(pbio_port_id_t port);

  /**
   * @brief カラーセンサのRGB値を返す．
   * @return RGB値、各色10ビット．
   */
  pup_color_rgb_t get_rgb();

  /**
   * @brief カラーセンサのHSV値で表される色を返す．
   * @param surface 表面の色を取得するかどうか．
   * @return HSV値で表される色．
   */
  pup_color_hsv_t get_color(bool surface = true);

  /**
   * @brief カラーセンサのHSV値を返す．
   * @param surface 表面の色を取得するかどうか．
   * @return HSV値．
   */
  pup_color_hsv_t get_hsv(bool surface = true);

  /**
   * @brief カラーセンサの反射光を返す．
   * @return 反射光、10ビット．
   */
  int32_t get_reflection();

  /**
   * @brief カラーセンサの環境光を返す．
   * @return 環境光、10ビット．
   */
  int32_t get_ambient();
};

inline ColorSensor::ColorSensor(pbio_port_id_t port) {
  device = pup_color_sensor_get_device(port);
}

} // namespace spikeapi

#endif
