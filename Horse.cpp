//Horse.cpp
#include <string>
#include <iostream>
#include "Horse.h"

horse::horse(){
	horse::position = 0;
	horse::id = 0;
	horse::trackLength = 0;
}// end constructer

void horse::init(int id, int trackLength){
	horse::trackLength = trackLength;
	horse::id = id;
}// end init

void horse::advance(){
	horse::position = position + 1;
}// end advance

void horse::printLane(){
	for(int i = 0; i < horse::position; i ++){
		std::cout << (".");
	}// end for
	std::cout << horse::id;
	for(int i = 0; i < horse::trackLength - horse::position; i++){
		std::cout << (".");
	}// end for
	std::cout << std::endl;	
}// end printLane

bool horse::isWinner(){
	if(horse::position == horse::trackLength){
		return true;
	}// end if
	return false;
}// end isWinner
