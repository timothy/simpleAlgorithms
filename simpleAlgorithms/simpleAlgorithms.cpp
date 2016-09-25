// simpleAlgorithms.cpp : Defines the entry point for the console application.
//simpleAlgsFunctions.cpp

#include "stdafx.h"
#include <iostream>
#include <string>
#include "simpleAlgsFunctions.h"
//#include <cmath>
using namespace std;

int main()
{
	string tim = "Timothy";
	cout << reverse(tim) << endl;

	int flipIt = 123450;
	cout << reverse(flipIt) << endl;

	int num = 10;
	cout << factorialize(num) << endl;


	return 0;
}