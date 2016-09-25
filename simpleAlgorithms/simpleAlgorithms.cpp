// simpleAlgorithms.cpp : Defines the entry point for the console application.
//simpleAlgsFunctions.cpp

#include "stdafx.h"
#include "simpleAlgsFunctions.h"
#include <iostream>
#include <string>
#include <vector>
//#include <cmath>
using namespace std;


int main()
{
	string tim = "timothy";
	cout << reverse(tim) << endl << count(begin(tim), end(tim),'t') << endl;

	int flipIt = 123450;
	cout << reverse(flipIt) << endl;

	int num = 10;
	cout << factorialize(num) << endl;

	vector<int> vectInt = dataGen(10);
	for (auto inty:vectInt)
	{
		cout << inty << " ";
	}cout << endl;


	return 0;
}