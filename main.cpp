/**----------------------------------------------------------------------------
 * @target      Nucleo F030R8
 * @libraries   mbed drivers only
 * @date        12-February-2015
 * @author      Hotboards
 * @mbed tag    93
 * @brief       This is a project build with the mbed libraries ready to compile
 * using GNU ARM compiler and eclipse, it has only the driver libraries at the
 * moment. Should be use as a template only copy and paste to generate a new
 * independent project, or use egit to clone from the github repository.
 * in folder Debug you will find .hex, .elf and .bin file to program your board
 * check the readme file for more information
-----------------------------------------------------------------------------*/
#include "mbed.h"

DigitalOut myled(LED1);
Serial device(PA_2, PA_3);// tx, rx

int main()
{
    device.baud(9600);//init serial port

    while(1)
    {
        myled = 1; // LED is ON
        wait(0.2); // 200 ms
        myled = 0; // LED is OFF
        wait(1.0); // 1 sec
        device.printf("Hola Amigos\r\n");
    }
}
