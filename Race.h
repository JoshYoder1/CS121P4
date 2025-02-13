#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "Horse.h"

class Race{
	public:
		const int numHorses = 5;
		const int trackLength = 15;
		horse horses[];
	private:
		Race();
		void run();
};// end class

#endif
