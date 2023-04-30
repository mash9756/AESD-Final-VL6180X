/**
 * 	TODO: add comments and file info
 * 
 * 	look into sensor value calculation, is it fine by default?
*/

#include "vl6180_pi.h"
#include <stdio.h>
#include <unistd.h>

#include <fcntl.h>
#include <sys/stat.h>

#include "LCD_ioctl.h"

#define LCD_CHAR_DRIVER	("/dev/LCD_device")
#define LINE_LEN		(16)

int main()
{
	vl6180 handle = vl6180_initialise(1);

	if(handle<=0)
		return 1;

	get_ID(handle);
	sleep(1);

	int als 	= 0;
	int i 		= 0;
	char lineOne[LINE_LEN];
	
	struct LCD_clear clear;
	clear.clear_cmd = (char *)LCD_CLEAR_INS;
	printf("\nclear command: %s", clear.clear_cmd);

	int lcd = open(LCD_CHAR_DRIVER, O_RDWR|O_CREAT|O_APPEND, S_IRWXU|S_IRWXG|S_IRWXO);

	while(1)
	{
		i = 0;
		ioctl(lcd, LCDCHAR_IOCCLEAR, &clear);

		als = get_ALS(handle);
		snprintf(lineOne, LINE_LEN, "ALS: %d Lux", als);

		while(lineOne[i] != '\0')
			i++;

		write(lcd, lineOne, i);
		sleep(3);
	}

	return 0;
}
