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
    //parameterized constructor
    Student(int a, int r){
        cout <<"Parameterized constructor demo."<<endl;
        cout <<"Constructor 3 called"<<endl;
        age =a;
        rollNumber = r;
    }
    
    ~Student(){
        cout <<"Destructor called!"<<endl;
    }
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