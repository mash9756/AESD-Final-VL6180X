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

#define IDENTIFICATION__MODEL_ID        (0x000)
#define SYSTEM__INTERRUPT_CONFIG_GPIO   (0x014)
#define SYSTEM__FRESH_OUT_OF_RESET      (0x016)

#define SYSALS__START                   (0x038)
#define SYSALS__THRESH_HIGH             (0x03A)
#define SYSALS__THRESH_LOW              (0x03C)
#define SYSALS__INTERMEASUREMENT_PERIOD (0x03E)
#define SYSALS__ANALOGUE_GAIN           (0x03F)
#define SYSALS__INTEGRATION_PERIOD      (0x040)
#define RESULT__ALS_STATUS              (0x04E)
#define RESULT__ALS_VAL                 (0x050)
#define RESULT__INTERRUPT_STATUS_GPIO   (0x04F)
#define SYSTEM__INTERRUPT_CLEAR         (0x015)

void VL6180X_init();
int VL6180X_read();