// Leature no 05 ( Reference variable and Typecasting)


#include <iostream>
using namespace std; 


// Global variable
int c = 23;


int main(){

    // local variable
    int c = 43;

    cout << "the value of c is : " << c << endl;

    cout << " the value of global c is :  " << ::c << endl;  // to access global variable that has same name as of local vairable 
                                                           //  we can used ( Scope resolution operator ::) to access global variable value
    
    // sizeof() keyword:-

    cout << "the size of 43 is : " << sizeof(43) << endl;    // size of integral is = 4   (According to 64-bit os)
    

    // Reference Variable:- 

    float var1 = 4.55f;
    float & y = var1;     // same variable but just different name 

    cout << var1 << endl;    // 4.55
    cout << y << endl;       // 4.55


    // Typecasting:-

    // 1) Smaller to Bigger
    float b = 34.44;
    long a = b;
    cout << a;

    // 2) Bigger to Smaller
    long var2 = 4567l;
    float var3 = (float)var2;
    cout << var3 << endl;
    cout << sizeof(var3) << endl;   // now the size will be 4 after long convert to float
    
        
    return 0;
}
