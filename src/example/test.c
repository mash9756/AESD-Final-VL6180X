#include "vl6180_pi.h"
#include <stdio.h>
#include <unistd.h>

int main(){

	vl6180 handle = vl6180_initialise(1);

	if(handle<=0){
		return 1;
	}
	
	get_ID(handle);
	sleep(1);
	int als = 0;
	int distance = 0;
	
	while(1)
	{
		als = get_ALS(handle);
		printf("\nAmbient Light Value: %d", als);
		distance = get_distance(handle);
		printf("\nRanging Value: %d\n", distance);
		sleep(1);
	}
	return 0;
}
