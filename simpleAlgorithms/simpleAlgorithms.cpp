// simpleAlgorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


string reverseString(string str)
{
	string reverse = "";

	for (int i = 0; i<str.length(); i++)
	{
		reverse += str[(str.length() -1) - i];
	}
	return reverse;
}

auto factorialize(int num) {
	if (num == 1) {
		return 1;
	}
	auto factorial = 1;
	for (auto i = 2; i <= num; i++) {
		factorial = factorial * i;
	}

	return factorial;
}

int main()
{
	string tim = "Timothy";
	int num = 10;

	cout << reverseString(tim) << endl;

	cout << factorialize(num) << endl;

	return 0;
}