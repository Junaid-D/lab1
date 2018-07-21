#include <iostream>
#include <cstdlib>
#include <ctime>


int main()
{
	const int roundLimit=5;

	std::cout<<"Guess the random number"<<std::endl;

	srand(time(0));
	int targetNo = rand()%100 +1;

	for (int i=0;i<roundLimit;i++)
	{
		
		int userGuess=0;
		std::cin>>userGuess;
		while (!std::cin.good())
		{
			std::cout<<"Not an Int"<<std::endl;
			std::cin.clear();
			std::cin.ignore(INT8_MAX, '\n');
			std::cin>>userGuess;

		}

		if(userGuess>targetNo)
		{
			std::cout<<"Guess Lower"<<std::endl;
		}else if(userGuess<targetNo)
		{
			std::cout<<"Guess Higher"<<std::endl;
		}else
		{
			std::cout<<"You Win"<<std::endl;
			return 0;
		}
	}
	std::cout<<"You Lose"<<std::endl;
	std::cout<<"The number is "<<targetNo<<std::endl;
	return 0;
}