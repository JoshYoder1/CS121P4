//horse.h
#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class horse {
	public:
		int position;
		int id;
		int trackLength;
	private:
		horse();
		void init(int id, int trackLength);
		void advance();
		void printLane();
		bool isWinner();
};// end class

#endif
