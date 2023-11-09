#include <iostream>

#include<cctype>
#include "myLibrary.h"
//#include "myLibrary.h"

using namespace std;




/*string firstString;*/ 



int main(/*int argc, int[] argv*/)
{

    string firstString = "name"; 

    string secondString = "Seth";

    cout << std::boolalpha << isSameStringLength(firstString, secondString) << endl; 
    //cout << "Enter three numbers - this program determines the largest of those: " << endl; 
    //double a, b, c; 
    //cin >> a >> b >> c; 

    //double result = returnLargest(a, b, c);

    //cout << "The largest of the three is: " << result << endl;
    ////main(); //infinite recursive function call (main calls itself)  
    //cout << "How many times do you want hello world to get printed?" << endl; 
    //int numberOfTimesToPrint; 
    //cin >> numberOfTimesToPrint; 


    ////call the function `printHelloWorld`
    //printHelloWorld(numberOfTimesToPrint); 

    ////execution!

    ////cout << ceil(3.4) << "\t" << ceil(-2.4) << endl;
    ////cout << floor(3.4) << "\t" << floor(-2.4) << endl; 

    ////niche

    ////cout << cos(90) << endl; //0?

    ////cout << cos(3.14 / 2) << endl; //0? 

    //cout << "Enter some character (a digit 0-9), a letter (a - z, A - Z)"
    //    << "or something else " << endl;

    //char someChar; 

    //cin >> someChar; 

    //if (isalpha(someChar))
    //{
    //    cout << "You entered a LETTER! Hoorah!" << endl; 
    //    cout << "Your letter in UPPERCASE is: " << (char)toupper(someChar) << endl; 
    //}

    //else if (isdigit(someChar))
    //{
    //    cout << "You entered a number" << endl; 
    //}

    //else
    //{
    //    cout << "You entered something else (special character)" << endl; 
    //}

    //cout << largest << endl; 
    //std::max_element()




    return 0;
}