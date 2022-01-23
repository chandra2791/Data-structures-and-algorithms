#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int power(int x, int n){

//Base case
if(n==0) return 1;

//Recursive case
int smalloutput = power(x,n-1);

return x * smalloutput;

}
int main (){

cout <<power(5,3);
return 0;
}
