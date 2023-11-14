#include <iostream>
#include "myLibrary.h"

#include<iomanip>

using namespace std;

//templates allow for "generic programming" 

template <typename T> //T stands in for any Type that we like 
T addTwo(T a)
{
    return a + 2; 
}


auto multiplyByTwo(int a)
{
    return a * 2; 
}

int main()
{

    auto result = multiplyByTwo(64); 

    auto a = 5.0; 
    cout << typeid(a).name() << endl; //type(a)
    //int a = 5; 


    cout << addTwo(3) << endl; 

    cout << fixed << setprecision(2); 
    cout << addTwo(4.0) << endl;

    cout << addTwo('b') << endl; 

    //cout << "Hello?" << endl; 

    //main(); //infinite RECURSION 
    //           //recursion occurs (in programming) when a function calls ITSELF!

   // doSomethingTERRIFIC(5); 



    return 0;
}