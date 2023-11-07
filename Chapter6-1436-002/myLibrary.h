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


double returnLarger(double num1, double num2)
//returns the larger of 2 numbers
{
    if (num1 >= num2) {
        return num1;
    }
    else {
        return num2;
    }
}

double returnLargest(double num1, double num2, double num3)
{
    double largest = 10; //this variable has "local" scope 
                        //it is only accessible within THIS function (main cannot use it) 

    largest = returnLarger(num1, returnLarger(num2, num3)); //note the function calls
    //__debug_break

    return largest; 

}

//Note that it may be wasteful/expensive to pass string arguments this way
//("passing by value") -more on this later
bool isSameStringLength(string firstString, string secondString)
{
    if (firstString.length() == secondString.length()) {
        return true;
    }
    else {
        return false;
    }
}
