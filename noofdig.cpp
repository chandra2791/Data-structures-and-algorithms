
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int count (int n){
//base case
if (n==0){
    return 0;
}

int smallans = count(n/10);

return smallans + 1;
}
int main (){

cout << count(7820);
return 0;
}
