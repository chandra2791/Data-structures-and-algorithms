#include <iostream>
using namespace std;
class Student {


    private :
    int age;

    public :
    int rollNumber;

    //deafault constructor
    Student (){
        cout << "Constructor called"<< endl;
    };
    

    void display(){
        cout << age <<" "<<rollNumber<<endl;
    }

    int getAge(){
        return age;
    }

    void setAge(int a, int password){
        if(password != 123){
            return;
        }
        if (a<0){
            return;
        }
        age = a;
    }
};