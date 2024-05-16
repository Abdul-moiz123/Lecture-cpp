#include <iostream>
#include <iomanip>
using namespace std;

//    LECTURE NO 11 (STRUCT IN C++)

struct Student_Info{
    string name;
    int age;

    Student_Info(string name , int age){
        this->name=name;
        this->age=age;
    }

    void Info(){
        cout << "The name is: " << name << " and age is: " << age << endl;
    }
};


int main(){

    struct Student_Info myoby = Student_Info("Moiz" , 19);

    myoby.Info();



   return 0;
}