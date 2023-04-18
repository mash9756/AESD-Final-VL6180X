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
    int i2cdev  = 0;
    int i2creg  = 0x000;
    int i2cdata = 0;
    i2cdev = i2cOpen(I2C_BUS_NUM, VL6180X_ADDR, 0);

    i2cdata = i2cReadByteData(i2cdev, i2creg);
    printf("\nRead %x from i2c reg %x from i2c dev %x\n", i2cdata, i2creg, i2cdev);

    i2cClose(i2cdev);
}
