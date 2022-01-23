
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

void printnum (int x){

if (x==0) return;
 printnum (x-1);
cout <<x<<endl;
}

void printnum2(int x){
if (x==0) return;
cout<<x<<endl;
printnum2(x-1);
}
int main (){

printnum(5);
cout<<endl;
printnum2(5);
return 0;
}
