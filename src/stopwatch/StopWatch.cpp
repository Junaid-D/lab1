#include "StopWatch.h"
#include <ctime>
using namespace std;

// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing 

StopWatch::StopWatch()
{

}



void StopWatch::reset()
{
	elapsedTime=0.0;
}


void StopWatch::pauseTiming()
{
	elapsedTime+=getProcessTime()-prevTime;
}

void StopWatch::startTiming()
{
	prevTime=getProcessTime();

}



double StopWatch::getProcessTime()
{
	clock_t time = clock();
	return static_cast<double>(time)/CLOCKS_PER_SEC;
}

StopWatch::~StopWatch()
{

}
