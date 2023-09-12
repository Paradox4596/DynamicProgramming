#pragma once

#include <iostream>



int64_t Fibonacci(int n)

{
	// base case
	if ( n <= 2 )
	{
		return 1;
	}

	// recursive
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// Optimize - �ߺ���� ����
int64_t Fibonacci_memo(int n, std::map<int, int64_t>)