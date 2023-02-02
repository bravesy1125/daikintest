//
// daikintest.h
//

#pragma once

class daikintest{

	public:
		static unsigned char controlling(int temperature);

};

enum heating_cooling_on
{
	all_off = 0,
	heating_on = 1,
	cooling_on = 2
};

#define MIN_T 1000	//10.00 degree
#define MAX_T 2000	//20.00 degree