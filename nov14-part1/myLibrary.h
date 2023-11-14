#pragma once


#include<iostream> 

using namespace std;

void doSomethingTERRIFIC(int n)
{
	cout << "Enter yes to continue" << endl; 
	string response; 

	cin >> response; 


	if (response == "yes")
	{
		for (int i = 0; i < n; i++)
		{
			cout << "doing something terrific!" << endl; 
		}
	}

	else
	{
		cout << "Goodbye!" << endl; 
	}
}