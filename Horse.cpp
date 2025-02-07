//Horse.cpp
#include <string>
#include <iostream>
#include "Horse.h"

#indef

Horse::Horse(){
	Horse::position = 0;
	Horse::id = 0;
	Horse::trackLength = 0;
}// end constructer

void Horse::init(int id, int trackLength){
	Horse::trackLength = trackLength;
	Horse::id = id;
}// end init

void Horse::advance(){
	Horse::position = Horse::position + 1;
}// end advance

void Horse::printLane(){
	for(i = 0, i < Horse::position, i ++){
		std::cout << (".");
	}// end for
	std::cout << (Horse::id);
	for(i = 0, i < Horse::trackLength - Horse::position, i++){
		std::cout << (".");
	}// end for
	std:: << (std::endl)	
}// end printLane

bool Horse::isWinner(){
	if(Horse::position == Horse::trackLength){
		return true
	}// end if
}// end isWinner
