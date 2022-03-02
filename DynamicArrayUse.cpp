#include <iostream>
using namespace std;
#include "DynamicArray.cpp"

int main(){

    DynamicArray d1;

    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
   // d1.add(60);

    d1.add(100,2);
    cout<< "The capacity of the array is "<< d1.getCapacity()<<endl;
    d1.print();


    DynamicArray d2(d1);

    cout <<"\nThe below output is that of d2 using  shallow copy."<<endl;
    d2.print();
    return 0;
}