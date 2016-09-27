// simpleAlgorithms.cpp : Defines the entry point for the console application.
//simpleAlgsFunctions.cpp

#include "stdafx.h"
#include "simpleAlgsFunctions.h"
#include <iostream>
#include <string>
#include <vector>
#include <regex>
//#include <cmath>
using namespace std;



int main()
{
	string testStr = "five big people walking five miles the wrong way five times";

	cout << longestWord(testStr) << endl;

	vector<string> vectStr = splitString("I want to eat some bread", ' ');
	for (auto stringy : vectStr)
	{
		cout << stringy << "\n";
	}

	 vectStr = splitString(testStr, "five");
	for (auto stringy : vectStr)
	{
		cout << stringy << "\n";
	}


	cout << palindrome("Th1s, i^$!s what I. 8 2da@y") << endl;//should be false
	cout << palindrome("A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!") << endl;//should be true


	string tim = "timothy";
	cout << reverse(tim) << endl << count(begin(tim), end(tim), 't') << endl;

	int flipIt = 123450;
	cout << reverse(flipIt) << endl;

	int num = 10;
	cout << factorialize(num) << endl;

	vector<int> vectInt = dataGen(10);
	for (auto inty : vectInt)
	{
		cout << inty << " ";
	}cout << endl;


	return 0;
}