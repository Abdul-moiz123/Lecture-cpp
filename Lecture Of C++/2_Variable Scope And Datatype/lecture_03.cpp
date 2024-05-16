//  Lecture no 03  ( Variable Scope and Datatype)

    // there are two type of variable  ( 1: Local Variable and  2: Global Variable)

    // Local Variable:  decalar insie the bracket and only access only there
    // Global Variable: declare outside any function and access anywhere


    // Datatype:-

    /*
    1) built-in
    2) user-defined
    3) derived
    */

    /*
    BUilt-in Datatype
    1) int
    2) double
    3) float
    4) char
    5) short
    6) long 
    7) bool
    */

   /*
   User-Defined Datatype
   1)  Struct
   2)  Union
   3)  Enum
   */ 

   /*
   Derived Datatype
   1) Array
   2) Function
   3) Pointer
   */

#include <iostream>
using namespace std;


// example of local and global variable:-

int global = 34;
void sum() {
    int local =23;
    cout << global << endl;
    cout << local << endl;
}


int main(){
    int global = 56;   // local variable will take the precision and now print 56 instead of 34    (IMPORTANT!!!)
    global = 99;      // it will update the local variable 


    cout << global << endl;  // first it will search for local "global" if found it will print that
                            //  if not that it will search for global " global" if found than it will print that
                            //  local >> global  ( SPECIFICATION)

    sum();    // same will happen here frist local in not than global ( in that function)

    bool is_true = true;  // print 1
    bool is_false = false;  // print 0

    return 0;
}