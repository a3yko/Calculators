// Pizza Calc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
		
	cout << "How many slices of Pizza did you eat?" << endl;

	double Pizza;
	cin >> Pizza;

	double Mile = 100;
	double Burned = (Pizza * 375) / Mile;

	cout << Burned << " Miles must be jogged for you to burn off all the calories eaten" << endl;
	system("pause");
	return 0;
	

	
}

