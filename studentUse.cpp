#include "student.cpp"

using namespace std;

int main(){

    Student s1;
    Student s2;
    Student s3,s4,s5;

    Student *s6 =  new Student;
    cout << "This is the output of the program"<<endl;
 //   s1.age = 24;
    s1.rollNumber = 100;

    s1.display();
    cout <<"\n";
    s2.display();
    cout <<"\n";


    cout << "S1 age :"<<s1.getAge()<<endl;
    cout << "s2 age :"<<s2.getAge()<<endl;

   // cout << s1.age << endl;
    cout << s1.rollNumber <<endl;

   // (*s6).age = 23;
    (*s6).rollNumber = 30;
    (*s6).display();

  //  s6 -> 23;
    s6 -> rollNumber = 30;
    s6 -> display();
    cout << "s6 : "<<(*s6).getAge()<<endl;
    return 0;
}