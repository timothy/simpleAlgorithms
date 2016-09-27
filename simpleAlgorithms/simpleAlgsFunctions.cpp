#include "stdafx.h"
#include "simpleAlgsFunctions.h"
#include <vector>
#include <ctime>
#include <algorithm>
#include <regex>
using namespace std;

int longestWord(string str)
{
	vector<string> wrds = splitString(str, ' ');
	int largeWrdLength = wrds[0].length();

	for (auto i = 1; i < wrds.size(); i++) {
		largeWrdLength = (largeWrdLength < wrds[i].length()) ? wrds[i].length() : largeWrdLength;
	}
	return largeWrdLength;
}

vector<string> splitString(string str, string spltr)
{
	vector<string> vs;
	string temp = "";
	for (auto i = 0; i < str.length(); i++)
	{
		if (str[i] == spltr[0])
		{
			if (str.substr(i, spltr.length()) == spltr)
			{
				vs.push_back(temp);
				temp = "";
				i += spltr.length() - 1;
			}
		}
		else
		{
			temp.push_back(str[i]);
		}
	}
	vs.push_back(temp);
	return vs;
}

vector<string> splitString(string str, char spltr)
{
	vector<string> vs;
	string temp = "";
	for (auto i = 0; i < str.length(); i++)
	{
		if (str[i] == spltr)
		{
			vs.push_back(temp);
			temp = "";
		}
		else
		{
			temp.push_back(str[i]);
		}
	}
	vs.push_back(temp);
	return vs;
}

bool palindrome(string str)
{
	regex format("[[:digit:]]|[[:space:]]|[[:punct:]]");

	transform(str.begin(), str.end(), str.begin(), ::tolower);
	str = regex_replace(str, format, "");

	return str == reverse(str);
}

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