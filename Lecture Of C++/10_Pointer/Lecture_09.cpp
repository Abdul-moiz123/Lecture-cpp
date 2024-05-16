#include <iostream>
#include <iomanip>
using namespace std;

int main(){

// ******************************/***************************************************

    // Pointer --> data type which hold the address of other data type

    long number = 323238;   // variable

    long* address = &number;    // pointer variable

    // if we have the variable and need address of that variable
    // & --> address of operator

    cout << address << endl; 
             //OR
    cout << &number << endl;

    // if we have the address and need the value of that variable
    // * --> Dereffernece operator

    cout << *address << endl;

// ******************************/***************************************************


    // pointer ka pointer ( address of address)

    int a = 3;       // variable
    int* b = &a;     // pointer of variable
    int** c = &b;    // pointer of pointer

    cout << b << endl;  // variable address
    cout << c << endl;  // variable address ka address

    cout << *b << endl; // value of variable 
    cout << *c << endl; // value of address of address

    // shortcut of address of address
    cout <<"the address of variable: " << address << endl << "the address of pointer is : " << &address << endl << "the value of pointer variable is: " << *address << endl; 

   return 0;
}