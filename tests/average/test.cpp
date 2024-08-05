#include "CppUTest/TestHarness.h"

extern "C" {
	#include "average.h"

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










