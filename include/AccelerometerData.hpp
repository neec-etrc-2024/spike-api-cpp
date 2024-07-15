/**
 * @file AccelerometerData.hpp
 * @brief 3軸の加速度データを格納する構造体
 * @author bukidaiF
 * @date 2024.7.12
 */
#ifndef _SPIKEAPI_ACCELEROMETER_DATA_H
#define _SPIKEAPI_ACCELEROMETER_DATA_H

namespace spikeapi {
/**
 * @struct AccelerometerData
 * @brief 3軸の加速度データを格納する構造体
 */
struct AccelerometerData {
public:
  //! X軸の加速度
  float x;
  //! Y軸の加速度
  float y;
  //! Z軸の加速度
  float z;
};

} // namespace spikeapi
#endif
