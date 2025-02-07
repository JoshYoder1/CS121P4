//Horse.cpp
#include <string>
#include <iostream>
#include "Horse.h"

horse::Horse(){
	horse::position = 0;
	horse::id = 0;
	horse::trackLength = 0;
}// end constructer

void horse::init(int id, int trackLength){
	horse::trackLength = trackLength;
	horse::id = id;
}// end init

void horse::advance(){
	horse::position = horse::position + 1;
}// end advance

void Horse::printLane(){
	for(i = 0, i < horse::position, i ++){
		std::cout << (".");
	}// end for
	std::cout << Horse::id;
	for(i = 0, i < horse::trackLength - horse::position, i++){
		std::cout << (".");
	}// end for
	std:: << std::endl;	
}// end printLane

bool Horse::isWinner(){
	if(horse::position == horsetrackLength){
		return true;
	}// end if
}// end isWinner
