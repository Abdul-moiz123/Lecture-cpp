//                   Lecture no 04  ( header file and operator)

    /*
    There are two(2) type of header file:-
    1) system header file : comes with complier
    2) user defined header file : written by the programmer
    */

  

#include <iostream>             // defined by complier :
//#include "User_Defined.cpp"    // defined by user :  just like import your other file into this file  ( must have that file) 

using namespace std;

int main(){

    // Arithmetric Operator:-

    int a=34 , b=78;

    cout << "arithmetric Operator" << endl;
    cout << "the resulr of a + b is :" << a+b << endl;
    cout << "the resulr of a - b is :" << a-b << endl;
    cout << "the resulr of a * b is :" << a*b << endl;
    cout << "the resulr of a / b is :" << a/b << endl;
    cout << "the resulr of a % b is :" << a%b << endl;
    cout << "the resulr of a++ is  :     " << a++ << endl;
    cout << "the resulr of --a is  :     " << a-- << endl;
    cout << "the resulr of ++a is  :     " << ++a << endl;
    cout << "the resulr of --a is  :     " << --a << endl;

    // Assingment Operator:-
    
    cout << "assignment Operator" << endl;
    double add = 23.44;
    cout << add << endl;
    add += 3.4;
    cout << add << endl;
    add -= 3.4;
    cout << add << endl;
    add *= 3.4;
    cout << add << endl;
    add /= 3.4;
    cout << add << endl;
    
    // Comparetion Operator:-
    cout << "comparetion Operator" << endl;
    cout << "the vale  of a == b is :" << (a==b) << endl;
    cout << "the vale  of a != b is :" << (a!=b) << endl;
    cout << "the vale  of a <= b is :" << (a<=b) << endl;
    cout << "the vale  of a >= b is :" << (a>=b) << endl;
    cout << "the vale  of a < b is :" << (a<b) << endl;
    cout << "the vale  of a > b is :" << (a>b) << endl;

    // logical Operator:-

    cout << "Logical Operator" << endl;
    cout << "the vale  of a == b is :" << ( (a==b) && (a<=b) ) << endl;
    cout << "the vale  of a != b is :" << ( (a!=b) || (a>b)  )<< endl;
    cout << "the vale  of a <= b is :" << !( (a==b) && (a<=b) ) << endl;
    cout << "the vale  of a <= b is :" << !( (a!=b) || (a>b) ) << endl;

    


    return 0;
}