#include "average.h"
#include <stdbool.h>
#include <math.h>


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


int muscle_activator(float imu[9], int test_value){
	int accel_val =(int)sqrt((imu[0] * imu[0] + imu[1] * imu[1] + imu[2] * imu[2]) / 3);
	int gyr_val = (int)sqrt((imu[3] * imu[3] + imu[4] * imu[4] + imu[5] * imu[5]) / 3);
	int mag_val = (int)sqrt((imu[6] * imu[6] + imu[7] * imu[7] + imu[8] * imu[8]) / 3);

	gyr_val = test_value;
	if(gyr_val < 120 )
		return 1; // muscle activated
	if(accel_val && gyr_val && mag_val > 2000)
		return 5;
	return 0;
}


float emg_mvn_avg(float emg_values[], float size){
	float total = 0;
	for(unsigned int i=0; i<size; i++){
		total += emg_values[i];
	}
	return total / size;
}



float calc_time_dom(float emg_values[], unsigned int size){
	//float emg_abs, emg_int, emg_ssi, emg_var, emg_rms;
	//emg_abs = emg_int = emg_ssi = emg_var = emg_rms = 0.0;

	float emg_int = 0.0;
	float emg_ssi = 0.0;

	for(unsigned int i=0; i<size; i++){
		emg_int += emg_values[i];
		emg_ssi +=  (emg_values[i] * emg_values[i]);
	}

	//emg_abs = emg_int / size;
	//emg_var = emg_ssi / (size - 1.0);
	//emg_rms = (float) sqrt(emg_ssi / size);

	return emg_ssi; // emg_int;
}





