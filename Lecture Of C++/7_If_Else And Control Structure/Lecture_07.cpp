#include <iostream>
using namespace std;

int main(){


    // IF-ELSE Statement:-
    int age;
    cout << " Enter our age plz: ";
    cin >> age;

    if(age>=18){
        cout << "you can drive the vehical" << endl;
    } else{       
        cout << " you can't drive the vehical" << endl;
    }



    // Multi IF-ELSE Statement:-
    int day;
    cout << " enter the Day No (1-3) : ";
    cin >> day;

    if(day==1){
        cout << "the day is = Monday" << endl;
    } else if(day==2){
        cout << "the day is = Tuesday" << endl;
    } else if(day==3){
        cout << "the day is = Wednesday" << endl;
    }else{
        cout << " invalid input plz try again" << endl;
    }



    // Switch case:-
    int month;
    cout << " enter the month no (1-3)";
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "jan" << endl;
        break;
    case 2:
        cout << "feb" << endl;
        break;
    case 3:
        cout << "mar" << endl;
        break;  
    case 4:
        cout << "apr" << endl;
        break;           
    case 5:
        cout << "may" << endl;
        break;
    case 6:
        cout << "jun" << endl;
        break;        
    case 7:
        cout << "jul" << endl;
        break;  
    default:
        cout << " invalid try again" << endl;
        break;
    }


    return 0;
}
