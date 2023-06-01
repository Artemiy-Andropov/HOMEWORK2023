#include <iostream>
#include "Rational.h"
#include "Exception.h"

int main()
{
	try
	{
		Rational rat_1;
		Rational rat_2(2, 3);
		
		std::cout << rat_1;

		rat_1 = rat_2;

		std::cout << rat_1;

		rat_1 *= 3;

		std::cout << rat_1;

		rat_1 /= 2;

		std::cout << rat_1;
	}
	catch (ArrayException& exception_)
	{
		std::cerr << "An exception occurred at array (" << exception_.GetError() << ") " << "Error code: " << exception_.GetCodeError() << std::endl;
	}
}