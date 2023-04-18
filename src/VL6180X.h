/**
 *  @file       VL6180X.h
 *  @author     Mark Sherman
 * 
 *  @brief      VL6180X function and defines for ST Proximity and Ambient Light Sensor
 *              See data sheet linked below
 *              https://www.st.com/en/imaging-and-photonics-solutions/vl6180x.html
 * 
 *  @date       4/1/23
 *  @version    1.0
*/

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <pigpio.h>

#define VL6180X_ADDR    (0x29)
#define I2C_BUS_NUM     (1)

void VL6180X_init();