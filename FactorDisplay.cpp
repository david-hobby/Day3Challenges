#include <iostream>
#include <math.h>

using namespace std;

void FactorDisplay(int num)
{
	int sqroot = ceil(sqrt(num));
	for (int i = 1; i <= sqroot; ++i)
	{
		if (num % i == 0)
		{
			cout << i << ", " << num / i << endl;
		}
	}
}