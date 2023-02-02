//
// daikintest.cpp
//

#include "daikintest.h"
#include <iostream>


unsigned char daikintest::controlling(int temperature) {
	int res = 0;
	
	if (temperature < MIN_T)
	{
		res = heating_on;
		std::cout << "Heating is ON! Cooling is OFF" << std::endl;
	}
	else if (temperature > MAX_T)
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