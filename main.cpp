/**
*	@file main.cpp
*	@author John Gibbons
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "Test.h"
#include "Node.h"

int main()
{
	char answer;
	std::cout << "Do you wish to execute Test Mode? y/n \n";
	std::cin >> answer;
	if( answer == 'y')
	{
		Test t;
		t.runTests();
	}
	else if(answer == 'n')
	{
		Queue q;

		return(0);
	}
	else
	{
		std::cout << "The answers were limited to 'y' or 'n' ...Good bye.";
	}

}
