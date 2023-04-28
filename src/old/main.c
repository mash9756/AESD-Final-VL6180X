/**
 *  @file       main.c
 *  @author     Mark Sherman
 * 
 *  @brief      main loop
 *  @date       4/1/23
 *  @version    1.0
*/

/**
 * scp LCD.c LCD.h main.c makefile mash9756@192.168.1.161:/home/mash9756/LCD
 * scp main mash9756@192.168.1.161:/home/mash9756/VL6180X
 * 
        scp test mash9756@192.168.1.161:/home/mash9756/VL6180X

 * ssh mash9756@192.168.1.161
 * 
 * arm-linux-gnueabihf-gcc
 * 
 * username: mash9756
 * password: aesd2021
 * 
 * -L/user/local/lib/ -I/home/admin/Documents/Final-Project/pigpio/
 * 
 * PATH=/home/admin/Downloads/cross-pi-gcc-10.2.0-0/bin:$PATH
 * 
 * update-alternatives --install /usr/bin/arm-linux-gnueabihf-gcc arm-linux-gnueabihf-gcc /usr/bin/arm-linux-gnueabihf-gcc-10-2 100
 * 
*/

#include "VL6180X.h"
const int ledPin = 21;

int main()
{
    //gpioInitialise(); // Initialise WiringPi with Broadcom GPIO pins

    gpioSetMode(ledPin, PI_OUTPUT); // Set LED Pin as an output

    printf("\nHello World!\n");

    // Turn LED On
    printf("LED On\n");
    gpioWrite(ledPin, PI_HIGH);

    gpioDelay(1000000);

    // Turn LED off
    printf("LED Off\n");
    gpioWrite(ledPin, PI_LOW);

    gpioDelay(1000000);
    
    VL6180X_init();

    //int result = 0;

    // while(1)
    // {
    //     //result = VL6180X_read();
    //     printf("\nMeasured Value: %d", result);
    //     gpioDelay(100000);
    // }
    gpioTerminate();
    return 0;
}