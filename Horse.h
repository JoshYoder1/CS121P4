//horse.h
#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class horse {
	private:
		int position;
		int id;
		int trackLength;
	public:
		horse();
		void init(int id, int trackLength);
		void advance();
		void printLane();
		bool isWinner();
};// end class

#endif
