
#include "stdafx.h"
#include <cstdlib>
#include <iostream>
//#include <ctime>
//srand(time(0));

int main()
{
	//std::cout << RAND_MAX<<std::endl;

	long double pi;
	long long int countKub=0;
	long long int countKrug=0;
	int x = rand();
	int y = rand();
	for (int i = 0;i < 10000000;++i)
	{
		int x = rand();
		int y = rand();
		countKub += 1;
		if ((x*x + y * y) <= RAND_MAX * RAND_MAX)
		{
			countKrug += 1;
		}
	}
	pi = (4 * long double(countKrug)) / (long double(countKub));
	std::cout << "pi = " << pi << std::endl;
	std::system("pause");
    return 0;
}

