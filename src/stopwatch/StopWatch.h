#ifndef STOPWATCH_H
#define STOPWATCH_H


/*
	stopwatch should have a start pause and reset for the purpose given

*/


class StopWatch{

public:
	StopWatch();

	void startTiming();
	void reset();
	double getTime() const{return elapsedTime;};
	void pauseTiming();


	~StopWatch();

private:	
	// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing 
	double getProcessTime();
	double prevTime=0.0;
	double elapsedTime=0.0;

};
#endif
