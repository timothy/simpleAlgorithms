#include "stdafx.h"
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>

std::vector<int> dataGen(int howMany, int range, bool shouldSort)
{
	srand(time(nullptr));
	std::vector<int> manyNums;

	for (int i = 0; i<howMany; i++)
	{
		manyNums.push_back(rand() % range + 1);
	}

	if (shouldSort) sort(begin(manyNums), end(manyNums));

    return manyNums;
}
std::vector<int> dataGen(int howMany, int range)
{
	srand(time(nullptr));
	std::vector<int> manyNums;

	for (int i = 0; i<howMany; i++)
	{
		manyNums.push_back(rand() % range + 1);
	}

	return manyNums;
}
std::vector<int> dataGen(int howMany)
{
	srand(time(nullptr));
	std::vector<int> manyNums;

	for (int i = 0; i<howMany; i++)
	{
		manyNums.push_back(rand() % 100 + 1);
	}

	return manyNums;
}
std::vector<int> dataGen()
{
	srand(time(nullptr));
	std::vector<int> manyNums;

	for (int i = 0; i<35; i++)
	{
		manyNums.push_back(rand() % 100 + 1);
	}

	return manyNums;
}

std::string reverse(std::string str)
{
	std::string reverse = "";

	for (unsigned int i = 0; i < str.length(); i++)
	{
		reverse += str[(str.length() - 1) - i];
	}
	return reverse;
}

int reverse(int num)
{
	int reverse = 0;

	while (num != 0) {
		int remainder = num % 10;
		reverse = reverse * 10 + remainder;
		num /= 10;
	}

	return reverse;
}

int factorialize(int num) {
	if (num == 1) {
		return 1;
	}
	auto factorial = 1;
	for (auto i = 2; i <= num; i++) {
		factorial = factorial * i;
	}

	return factorial;
}