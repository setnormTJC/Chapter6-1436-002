#include <iostream>

using namespace std;

//string distinctiveName = "Jabberwocky";


void printGreeting()
{
    string distinctiveName = "adfadf";
    cout << distinctiveName << " from printGreeting" << endl; 
    //this var has scope/it is defined within ONLY this function 

}

void demoPassByReference(int& input)
{
    cout << "Address of input in the `passByReference` function: " << &input << endl; 

    input++; 

    cout << "Updated input value to :" << input << endl; 
}

void demoPassByVALUE(int input)
{
    cout << "Address of input in the `passByVALUE` function: " << &input << endl;

    input++;

    cout << "Updated input value to :" << input << endl;
}


void doSomethingWithA(int& a) //passes arg. a by reference (NOT by value) 
{
    cout << "size of &a: " << sizeof(&a) << endl;
    //8 bytes (if running in x64 mode)
    cout << "size of a: " << sizeof(a) << endl;
    //4 bytes
}

void doSomething(int var)
{
    cout << var << endl;
    var = var + 1; //illegal due to const

    //l value refers to being on the LEFT side of an equation
}


int main()
{   
    int a = 5; 
    doSomething(a); 

    cout << a << endl; 
    //cout << "The address of 'a' in `main` is: " << &a << endl; 
    //demoPassByReference(a); 
    //cout << "After passing a by reference, the value of a in `main` is: " << a << endl; 
    //cout << "\n\n\n";
    //
    //demoPassByVALUE(a); 
    //cout << "After passing a by VALUE, the value of a in `main` is: " << a << endl;
    doSomethingWithA(a); 



    //int shallowCopyOfA = a; 

    //int& aliasOfA = a; //"deep copy"

    //cout << "a: " << a << "\t" << "copy of a: " << shallowCopyOfA <<
    //    "\talias of a: " << aliasOfA << endl;

    //a = 2345; 
    //
    //cout << "After modifying a (the original): " << endl; 
    //cout << "a: " << a << "\t" << "copy of a: " << shallowCopyOfA 
    //   << "\talias of a: " << aliasOfA << endl;;

    //cout << &a << endl; 

    ///if (a < 0 & a > 0 )
    //cout << a << endl; 
    //printGreeting(); 

    ////cout << distinctiveName << " from main" << endl;

    //printGreeting();
    ////cout << "Hello World";

    return 0;
}