/**
 *  @file       VL6180X.c
 *  @author     Mark Sherman
 * 
 *  @brief      VL6180x function implementation
 *  @date       4/1/23
 *  @version    1.0
*/

#include "VL6180X.h"

void VL6180X_init()
{
    wiringPiI2CSetup(VL6180X_ADDR);
}
