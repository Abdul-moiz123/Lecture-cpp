#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    // one way to declare array
    int ary[] = {23,56,43,56,76};

    cout << ary[0] << endl;
    cout << ary[1] << endl;
    cout << ary[2] << endl;
    cout << ary[3] << endl;
    cout << ary[4] << endl;

    // second way to declare array
    int marks[3];
    marks[0]= 34;
    marks[1]=70;
    marks[2]=80;

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;

    // change value of an array 
    marks[0]=90;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;

    // array items through loop

    for (int i = 0; i < 5 ; i++){
        cout << "the value of ary " << i  << " is: " << ary[i] << endl;
    }

    int b = 0;
    while (b<5){
        cout << "the value of " << b << " is : " << ary[b] << endl; 
        b++;
    }

    int a = 0;
    do
    {
        cout << "the value of " << a << " is: " << ary[a] << endl;
        a++;
    } while (a<5);


    // array of pointer:-

    cout << "the address of ary is: " << ary << endl;       // you can get artay address from its name directly    (IMPORTANT!!!)
    int* ptr = ary;                                         // pointer variable of ary that store the address of ary in it
    
    cout << "the value of ary[0] is: " << *ptr << endl;         // index[0] 
    cout << "the value of ary[1] is: " << *(ptr+1) << endl;    // index[1]
    cout << "the value of ary[2] is: " << *(ptr+2) << endl;    // index[2]
    cout << "the value of ary[3] is: " << *(ptr+3) << endl;    // index[3]
    cout << "the value of ary[4] is: " << *(ptr+4) << endl;    // index[4]

    
   return 0;
}