/**
 * @file GyroscopeData.hpp
 * @brief 3軸の角速度を格納する構造体
 * @author bukidaiF
 * @date 2024.7.12
 */
#ifndef _SPIKEAPI_GYROSCOPE_DATA_H
#define _SPIKEAPI_GYROSCOPE_DATA_H

namespace spikeapi {
/**
 * @struct GyroscopeData
 * @brief 3軸の角速度を格納する構造体
 */
class GyroscopeData {
public:
  //! X軸の角速度
  float x;
  //! Y軸の角速度
  float y;
  //! Z軸の角速度
  float z;
};

} // namespace spikeapi
#endif
