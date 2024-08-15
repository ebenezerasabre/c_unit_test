#include "CppUTest/TestHarness.h"

extern "C" {
	#include "average.h"
	#include <stdbool.h>
	#include <math.h>

}

// Create a test group
TEST_GROUP(average_test_group){
	void setup(){
		// initialize before each test

	}

	void teardown(){
		// Deinitialize after each test
		
	}

};




// Create test group for emg software
TEST_GROUP(emg_test_group)
{
	void setup(){
		// initialize before each test

	}

	void teardown(){
		// Deinitialize before each test

	}


};


// Test the average function
TEST(average_test_group, simple_test){
	float arr[] = {-1.0, 0.0, 1.0, 2.0, 3.0};
	float avg = average(arr, 5);
	CHECK_EQUAL(avg, 1.0);

}

// Test null array
TEST(average_test_group, null_test){
	float arr[1];
	float avg = average(arr, 0);
	CHECK_EQUAL(avg, 0.0);
}


// test addition function
TEST(average_test_group, add_test)
{
	int a = 3;
	int b = 4;
	int int_sum = a - b;
	int ext_sum = add(a, b);
	CHECK_EQUAL(ext_sum, int_sum);

}


// test muscle_activator
TEST(emg_test_group, activation_test){
	float imu[] = {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0};
	int activated = muscle_activator(imu, 100);
	CHECK_EQUAL(activated, 0);

}

// test time domain function

TEST(emg_test_group, time_domain_tes){
	float emg_values[] = {1,2,3,4,5,6 };
	float sum = calc_time_dom(emg_values, 6);
	//DOUBLES_EQUAL(20, sum, 0.0); // emg_int, actual = 21.00
	DOUBLES_EQUAL(91, sum, 0.2);   // emg_ssi
}




