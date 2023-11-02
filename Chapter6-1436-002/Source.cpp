#include <iostream>

#include<cctype>
#include "myLibrary.h"

using namespace std;




int main(/*int argc, int[] argv*/)
{
    cout << "How many times do you want hello world to get printed?" << endl; 
    int numberOfTimesToPrint; 
    cin >> numberOfTimesToPrint; 


    //call the function `printHelloWorld`
    printHelloWorld(numberOfTimesToPrint); 
        

    //cout << ceil(3.4) << "\t" << ceil(-2.4) << endl;
    //cout << floor(3.4) << "\t" << floor(-2.4) << endl; 

    //niche

    //cout << cos(90) << endl; //0?

    //cout << cos(3.14 / 2) << endl; //0? 

    cout << "Enter some character (a digit 0-9), a letter (a - z, A - Z)"
        << "or something else " << endl;

    char someChar; 

    cin >> someChar; 

    if (isalpha(someChar))
    {
        cout << "You entered a LETTER! Hoorah!" << endl; 
        cout << "Your letter in UPPERCASE is: " << (char)toupper(someChar) << endl; 
    }

    else if (isdigit(someChar))
    {
        cout << "You entered a number" << endl; 
    }

    else
    {
        cout << "You entered something else (special character)" << endl; 
    }

    return 0;
}