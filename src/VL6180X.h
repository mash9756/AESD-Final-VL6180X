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
#include "../WiringPi/wiringPi/wiringPi.h"
#include "../WiringPi/wiringPi/wiringPiI2C.h"
#include <stdio.h>

#define VL6180X_ADDR    (0x29)

void VL6180X_init();