// Lecture no 06 (Constant And Manipulators And Operator Precdence)

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    

    // Constant value:-
    const int aaa = 345;
    // aaa=43;     (cannot be change) 


    // Manipulator:-
    // 1) endl;       ( add nextline)
    // 2) setw();     ( make the space betwween answer and statement according to your value given in setw() )

    int a=34,b=45,c=56;

    cout << "the value of a without setw() is : " << a << endl;
    cout << "the value of b without setw() is : " << b << endl;
    cout << "the value of c without setw() is : " << a << endl;

    cout << "the value of a with setw() is : "<< setw(4) << a << endl;
    cout << "the value of b with setw() is : "<< setw(4) << b << endl;
    cout << "the value of c with setw() is : "<< setw(4) << c << endl;

    //Operator precedence:-

    int aa=56,bb=78;
    cout << ((((aa*5)+bb)-47)+78);
    // simple see online who has more precedence ( or will solve first)


    return 0;
}
