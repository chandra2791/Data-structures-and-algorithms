#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

bool isPresent (int a[], int n, int x){
    if (n==0){
        return false;
    }

    if(a[0]==x){
        return true;
    }

    return isPresent(a+1,n-1,x);
}
int main(){
    int a[]={1,2,3,4,5};
    if(isPresent(a,5,6)){
        cout <<"Found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}