/**
 *  @file       VL6180X.c
 *  @author     Mark Sherman
 * 
 *  @brief      VL6180x function implementation
 *  @date       4/1/23
 *  @version    1.0
*/

#include "VL6180X.h"

void VL6180X_tuning(int i2cdev)
{

    i2cWriteWordData(i2cdev, 0x0207, 0x01);
    i2cWriteWordData(i2cdev, 0x0208, 0x01);
    i2cWriteWordData(i2cdev, 0x0096, 0x00);
    i2cWriteWordData(i2cdev, 0x0097, 0xFD);
    i2cWriteWordData(i2cdev, 0x00e3, 0x00);
    i2cWriteWordData(i2cdev, 0x00e4, 0x04);
    i2cWriteWordData(i2cdev, 0x00e5, 0x02);
    i2cWriteWordData(i2cdev, 0x00e6, 0x01);
    i2cWriteWordData(i2cdev, 0x00e7, 0x03);
    i2cWriteWordData(i2cdev, 0x00f5, 0x02);
    i2cWriteWordData(i2cdev, 0x00d9, 0x05);
    i2cWriteWordData(i2cdev, 0x00db, 0xce);
    i2cWriteWordData(i2cdev, 0x00dc, 0x03);
    i2cWriteWordData(i2cdev, 0x00dd, 0xf8);
    i2cWriteWordData(i2cdev, 0x009f, 0x00);
    i2cWriteWordData(i2cdev, 0x00a3, 0x3c);
    i2cWriteWordData(i2cdev, 0x00b7, 0x00);
    i2cWriteWordData(i2cdev, 0x00bb, 0x3c);
    i2cWriteWordData(i2cdev, 0x00b2, 0x09);
    i2cWriteWordData(i2cdev, 0x00ca, 0x09);
    i2cWriteWordData(i2cdev, 0x0198, 0x01);
    i2cWriteWordData(i2cdev, 0x01b0, 0x17);
    i2cWriteWordData(i2cdev, 0x01ad, 0x00);
    i2cWriteWordData(i2cdev, 0x00ff, 0x05);
    i2cWriteWordData(i2cdev, 0x0100, 0x05);
    i2cWriteWordData(i2cdev, 0x0199, 0x05);
    i2cWriteWordData(i2cdev, 0x01a6, 0x1b);
    i2cWriteWordData(i2cdev, 0x01ac, 0x3e);
    i2cWriteWordData(i2cdev, 0x01a7, 0x1f);
    i2cWriteWordData(i2cdev, 0x0030, 0x00);
/*
    i2cWriteWordData(i2cdev, 0x0207, 0x01);
    i2cWriteWordData(i2cdev, 0x0208, 0x01);
    i2cWriteWordData(i2cdev, 0x0133, 0x01);
    i2cWriteWordData(i2cdev, 0x0096, 0x00);
    i2cWriteWordData(i2cdev, 0x0097, 0xFD);
    i2cWriteWordData(i2cdev, 0x00e3, 0x00);
    i2cWriteWordData(i2cdev, 0x00e4, 0x04);
    i2cWriteWordData(i2cdev, 0x00e5, 0x02);
    i2cWriteWordData(i2cdev, 0x00e6, 0x01);
    i2cWriteWordData(i2cdev, 0x00e7, 0x03);
    i2cWriteWordData(i2cdev, 0x00f5, 0x02);
    i2cWriteWordData(i2cdev, 0x00D9, 0x05);
    i2cWriteWordData(i2cdev, 0x00DB, 0xCE);
    i2cWriteWordData(i2cdev, 0x00DC, 0x03);
    i2cWriteWordData(i2cdev, 0x00DD, 0xF8);
    i2cWriteWordData(i2cdev, 0x009f, 0x00);
    i2cWriteWordData(i2cdev, 0x00a3, 0x3c);
    i2cWriteWordData(i2cdev, 0x00b7, 0x00);
    i2cWriteWordData(i2cdev, 0x00bb, 0x3c);
    i2cWriteWordData(i2cdev, 0x00b2, 0x09);
    i2cWriteWordData(i2cdev, 0x00ca, 0x09);
    i2cWriteWordData(i2cdev, 0x0198, 0x01); 

    i2cWriteWordData(i2cdev, 0x01b0, 0x17);
    i2cWriteWordData(i2cdev, 0x01ad, 0x00);
    i2cWriteWordData(i2cdev, 0x00FF, 0x05);
    i2cWriteWordData(i2cdev, 0x0100, 0x05);
    i2cWriteWordData(i2cdev, 0x0199, 0x05);
    i2cWriteWordData(i2cdev, 0x0109, 0x07);
    i2cWriteWordData(i2cdev, 0x010a, 0x30);
    i2cWriteWordData(i2cdev, 0x003f, 0x46);
    i2cWriteWordData(i2cdev, 0x01a6, 0x1b);
    i2cWriteWordData(i2cdev, 0x01ac, 0x3e);
    i2cWriteWordData(i2cdev, 0x01a7, 0x1f);
    i2cWriteWordData(i2cdev, 0x0103, 0x01);
    i2cWriteWordData(i2cdev, 0x0030, 0x00);
    i2cWriteWordData(i2cdev, 0x001b, 0x0A);
    i2cWriteWordData(i2cdev, 0x003e, 0x0A);
    i2cWriteWordData(i2cdev, 0x0131, 0x04);
    i2cWriteWordData(i2cdev, 0x0011, 0x10);
    i2cWriteWordData(i2cdev, 0x0014, 0x24);
    i2cWriteWordData(i2cdev, 0x0031, 0xFF);
    i2cWriteWordData(i2cdev, 0x00d2, 0x01);
    i2cWriteWordData(i2cdev, 0x00f2, 0x01);
*/
}

void VL6180X_init()
{
    int i2cdev  = 0;
    int devID   = 0;
    //int reset   = 0;
    //int timeout = 0;
 
    i2cdev = i2cOpen(I2C_BUS_NUM, VL6180X_ADDR, 0);
    devID = i2cReadByteData(i2cdev, IDENTIFICATION__MODEL_ID);
    printf("\nRead %x from i2c reg %x from i2c dev %x\n", devID, IDENTIFICATION__MODEL_ID, i2cdev);

    // while(reset != 1 && timeout < 100)
    // {
    //     reset = i2cReadWordData(i2cdev, SYSTEM__FRESH_OUT_OF_RESET);

    //     if(reset == 1)
    //     {
    //         VL6180X_tuning(i2cdev);
    //         printf("\nLoaded mandatory tuning settings");

    //         devID = i2cReadWordData(i2cdev, IDENTIFICATION__MODEL_ID);
    //         printf("\nRead %x from i2c reg %x from i2c dev %x\n", devID, IDENTIFICATION__MODEL_ID, i2cdev);

    //     /* configure for Ambient Light Sensing mode, internal, interrupt on new sample */
    //         //i2cWriteByteData(i2cdev, SYSTEM__INTERRUPT_CONFIG_GPIO, 0x20);
    //     /* setup integration time, datasheet recommends 100ms, 0x63 */
    //         //i2cWriteByteData(i2cdev, SYSALS__INTEGRATION_PERIOD, 0x63);
    //         return;
    //     }

    //     else
    //     {
    //         printf("\ntimeout...");
    //         timeout++;
    //     }    
    // }
       

    i2cClose(i2cdev);
}

int VL6180X_read()
{
    int i2cdev  = 0;
    i2cdev = i2cOpen(I2C_BUS_NUM, VL6180X_ADDR, 0);

/* set to ALS continuous mode and start a measurement */
    i2cWriteByteData(i2cdev, SYSALS__START, 0b11);

/* wait for result complete */
    while(i2cReadByteData(i2cdev, RESULT__INTERRUPT_STATUS_GPIO) != 0b001);
/* read ALS result */
    int result = i2cReadWordData(i2cdev, RESULT__ALS_VAL);

/* clear interrupt status */
    i2cWriteByteData(i2cdev, SYSTEM__INTERRUPT_CLEAR, 0b111);
    i2cClose(i2cdev);

    return result;
}

