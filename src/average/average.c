#include "average.h"

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


void muscle_activator(int imu[9],  bool msl_act){
	int accel_val_x = (imu[0] < 0) ? (imu[0] * -1) : imu[0];
	int accel_val_x = (imu[0] < 0) ? (imu[0] * -1) : imu[0];
	int accel_val_x = (imu[0] < 0) ? (imu[0] * -1) : imu[0];
	
}


void emg_mvn_avg(float emg_value_raw){

}


void calc_time_dom(void){


}

