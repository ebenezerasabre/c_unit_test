#include "average.h"
#include <stdbool.h>

#define MA_FILTER_SIZE	8
#define MA_SIGNAL_SIZE	64
float average(float arr[], unsigned int size){
	float total = 0;
	for (unsigned int i = 0;i < size; i++){
		total += arr[i];
	}
	return total / (float)size;

}

int add(int a, int b){
	return a + b;
}


bool muscle_activator(int imu[9], int test_value){
	float accel_val = sqrtf((imu[0] * imu[0] + imu[1] * imu[1] + imu[2] * imu[2]) / 3.0);
	float gyr_val = sqrtf((imu[3] * imu[3] + imu[4] * imu[4] + imu[5] * imu[5]) / 3.0);
	float mag_val = sqrtf((imu[6] * imu[6] + imu[7] * imu[7] + imu[8] * imu[8]) / 3.0);

	gyr_val = test_value;
	if(gyr_val > 120 )
		return 1; // muscle activated
	return 0;
}


void emg_mvn_avg(float emg_values[], unsigned int size){
	float total = 0;
	for(unsigned int i=0; i<size; i++){
		total += emg_values[i];
	}
	return total / (float)size;
}


void calc_time_dom(void){


}

