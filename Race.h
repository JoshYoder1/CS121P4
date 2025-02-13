#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "Horse.h"

class{
	public:
		const 5 int numHorses;
		const int tracklength;
		Horse horses[];
	private:
		Race();
		void run();
};// end class

#endif
