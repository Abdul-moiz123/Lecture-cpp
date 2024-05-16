#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // BREAK Statement:-

    int i = 1;
    for (;;){
        cout << i << endl;
        i++;
        if(i==5){
            break;
        }
    }

    // CONTINUE Statment:-

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
    }


    return 0;
}