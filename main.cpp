#include <iostream>
#include "Horse.h"
#include "Race.h"

int testHorse();

int main(){
	testHorse();

}

int testHorse(){
	horse test;
	test.init(1,15);
	bool keepGoing = true;
	while(keepGoing){
		test.advance();
		test.printLane();
		if(test.isWinner()){
			keepGoing = false;
		}
	}
}
