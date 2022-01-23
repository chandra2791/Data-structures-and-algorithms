#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;
double gSum(int k){

//Base case
if (k==0) return 1;

//Recursive case
double smallAns = gSum(k-1);

//Calculation part
return smallAns + (1.0/(pow(2,k)));

}

int main(){

cout<<gSum(3)<<endl;

return 0;
}
