#include "stdafx.h"
#include <string>

std::string reverse(std::string str)
{
	std::string reverse = "";

	for (int i = 0; i < str.length(); i++)
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