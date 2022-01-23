
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int countzeros(int n){
if(n==0){
    return 0;
}

int smallans = countzeros(n/10);

int last_digit = n%10;
if(last_digit == 0){
    return 1+smallans;
}
else {
        return smallans;
}
}

int main(){

cout<<countzeros(10320);
return 0;
}
