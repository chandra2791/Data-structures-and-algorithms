#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int sumOfArrary (int a[], int n){

if (n==0){
    return 0;
}


return a[0] + sumOfArrary(a+1,n-1);

}

int sumOfArrary2(int a[], int n){
if (n==0){
    return 0;
}

return a[n-1]+sumOfArrary2(a,n-1);
}
int main(){

int a[] = {1,2,3,4,5};
cout<< sumOfArrary(a,5)<<endl;
cout<< sumOfArrary2(a,5);
return 0;
}

