#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    // For loop:-

    for (int i = 0; i < 11; i++){
        cout << i << endl ;
    }

    // open way of for loop

    int i = 1;
    for (; ;){
        if( i <11){
            cout<<i << endl;
            i++;
        }
    }

    // infinate loop

    for ( int i =0 ; true ; i++){
        cout << i << endl;
    }

    //  math table code 

    int number ;
    cout << "Enter the number you want of table: ";
    cin >> number;

    for (int i = 1 ; i<11 ; i++){
        cout << setw(4) << number  << setw(4) << " X " << setw(4) << i << setw(4) <<  " = " << setw(4) << i*number << setw(4) << endl; 
    }  
    


    // While loop:-

    int i = 0;
    while (i<11){
        cout << i << endl;
        i++;
    }

    // infinte while loop

    int i = 0 ;
    while(true){
        cout << i << endl;
        i++;
    }     

    // table with while loop

    int number ;
    int i = 1;
    cout << "enter the number of which you want table of : ";
    cin >> number;

    while (i<11){
        cout << setw(4) << number  << setw(4) << " X " << setw(4) << i << setw(4) <<  " = " << setw(4) << i*number << setw(4) << endl;
        i++;  
    }



    // do-while loop:-   
 
    int i = 1;
    do
    {
        cout << i <<endl;
        i++;
    } while (i<0);

    // for wrong condition:-      (run atleast one time)

    int i = 1;
    do{
        cout << i << endl;
        i++;
    }while(false);




    return 0;
}
