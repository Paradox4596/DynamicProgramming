#pragma once










// Brute Force
// m : sum, n: numbers의 크기
// TC :
// SC :
bool CanAccumulate(const std::vector<int>& numbers, int sum)
{
	// base case
	if (sum == 0 )
	{
		return true;
	}
	if (sum < 0)
	{
		return false;
	}

	// recursive
	for (auto e : numbers)
	{
		if (CanAccumulate(nubmers, sum - e))
		{
			return true;
		}
	}

	return false;
}

// Memorization
// m : sum, n: numbers의 크기
// TC :
// SC :