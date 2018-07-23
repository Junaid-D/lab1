
#include <iostream>
#include "StopWatch.h"


int main()
{
	StopWatch watch1;

	watch1.startTiming();

	for (int i=0;i<1000000;i++)
	{

		std::cout<<"X"<<std::endl;


	}
	watch1.pauseTiming();
	std::cout<<watch1.getTime()<<std::endl;

	return 0;


}