#pragma once

#include<iostream>

using namespace std;

//return type is void 
//FUNCTION NAME is `printHelloWorld`
//numberOfTimesToPrint is an INPUT (AKA: argument) 
void printHelloWorld(int numberOfTimesToPrint) //
{
    //function definition
    for (int i = 0; i < numberOfTimesToPrint; i++)
    {
        cout << "Hello, world" << endl;
    }
}
