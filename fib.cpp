#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int fib(int n){

//base case
//since we are taking two jumps we need two base cases
if(n==0){
    return 0;
}

if (n==1){
    return 1;
}

//recursive case
int smalloutput1 = fib(n-1);
int smalloutput2 = fib(n-2);

return smalloutput1 + smalloutput2;
}


int main(){

cout<<fib(3);


return 0;
}
