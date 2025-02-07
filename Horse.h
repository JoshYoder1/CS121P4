class horse{
	public:
		int position;
		int id;
		int trackLength;
	private:
		Horse();
		void init(int id, int trackLength);
		void advance();
		void printLane();
		bool isWinner();
};// end class
