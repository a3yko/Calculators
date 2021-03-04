// Degrees Calc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	double c;
	double f;
	
	cout << "Enter the Tempenture in celsius " << endl;
	cin >> c;
	
	f = 1.8*c + 32.0;
	
	cout << "The tempenture in fahrenheit is .. " << endl;
	cout << f << endl;


	system("pause");
	return 0;
}

