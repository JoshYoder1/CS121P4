#include <iostream>
#include "Horse.h"
#include "Race.h"

int main(){
	testHorse();

}

int testHorse(){
	Horse::test = Horse(1, 15);
	keepGoing = true;
	while keepGoing{
		test.advance();
		test.printLane();
		if(test.isWinner){
			keepGoing = false;
		}
	}
}
