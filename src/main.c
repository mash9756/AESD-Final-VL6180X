/**
 *  @file       main.c
 *  @author     Mark Sherman
 * 
 *  @brief      main loop
 *  @date       4/1/23
 *  @version    1.0
*/

#include "VL6180X.h"
const int ledPin = 21;

int main()
{
    wiringPiSetupGpio(); // Initialise WiringPi with Broadcom GPIO pins

    pinMode(ledPin, OUTPUT); // Set LED Pin as an output

    printf("\nHello World!\n");

    // Turn LED On
    printf("LED On\n");
    digitalWrite(ledPin, HIGH);

    delay(1000);

    // Turn LED off
    printf("LED Off\n");
    digitalWrite(ledPin, LOW);

    delay(1000);

    VL6180X_init();

    return 0;
}