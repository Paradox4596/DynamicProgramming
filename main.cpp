#include <iostream>
#include "dp1.h"

// TC : O(2^n)
// SC : O(n)
int f(int n)
{
	if (n <= 1)
	{
		return 1;
	}

	f(n - 1);
	f(n - 1);

	return 0;
}

int main()
{
	std::<int, int64_t> memo;

	std::cout << Fibonacci(50, memo) << std::endl;
}