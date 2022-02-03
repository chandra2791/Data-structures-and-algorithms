#include <iostream>
#include "student.cpp"

using namespace std;

int main(){
//Student s1;
///s1.display();
//Student s2;
//s2.display();

//Student *s3 = new Student;

Student s6(10,100);
s6.display();

//Copy constructor. We are copying inbuilt constructor
Student s7(s6);
cout<<"Copy constructor example!"<<endl;
s7.display();

Student s1(10,100);
Student s2(20,200);

cout<<"Student s1:"<<endl;
s1.display();

cout<<"Student s2:"<<endl;
s2.display();

//copy assignment operator example:

s2=s1;

cout<<"Student s2 after copy assignment operator:"<<endl;
s2.display();

return 0;

}