//
// daikintest.cpp
//

#include "daikintest.h"
#include <iostream>


unsigned char daikintest::controlling(int temperature) {
	int res = 0;
	int temp = temperature * 100; //a simple convertion: 1000 means 10.00 degree for this test application.
	if (temp < MIN_T)
	{
		res = heating_on;
		std::cout << "Heating is ON! Cooling is OFF" << std::endl;
	}
	else if (temp > MAX_T)
	{
		res = cooling_on;
		std::cout << "Cooling is ON! Heating is OFF!  " << std::endl;
	}
	else {
		res = all_off;
		std::cout << "ALL is OFF! " << std::endl;
	}

	
	return res;
}