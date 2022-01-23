#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int recmultiply (int m, int n){

if (n==0) return 0;


int ans = recmultiply(m,n-1);

return ans + m;
}

int main (){

cout <<recmultiply(5,3);
return 0;
}


