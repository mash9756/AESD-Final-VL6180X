/**
 * 
*/

#include "vl6180_pi.h"
#include <stdio.h>
#include <unistd.h>

#include <fcntl.h>
#include <sys/stat.h>

#include "LCD_ioctl"

#define LCD_CHAR_DRIVER	("/dev/LCD_device")
#define LINE_LEN		(16)

int main()
{
	printf("\nRunning VL6180x Main...");
	vl6180 handle = vl6180_initialise(1);

	if(handle<=0)
	{
		printf("\nNo VL6180x handle.");
		return 1;
	}

	get_ID(handle);
	sleep(1);

	int als 	= 0;
	int bytes 	= 0;
	int i 		= 0;
	char lineOne[LINE_LEN];
	
	int lcd = open(LCD_CHAR_DRIVER, O_RDWR|O_CREAT|O_APPEND, S_IRWXU|S_IRWXG|S_IRWXO);

	while(1)
	{
		printf("\nClearing LCD");
		ioctl(lcd, LCDCHAR_IOCCLEAR);

		als = get_ALS(handle);
		bytes = snprintf(lineOne, LINE_LEN, "ALS: %d Lux", als);
		printf("\n%s", lineOne);

		while(lineOne[i] != '\0')
			i++;

		printf("\nPrinting to LCD");
		write(lcd, lineOne, i);
		printf("\nWrote %d bytes to LCD", bytes);
		sleep(5);
	}

	return 0;
}
