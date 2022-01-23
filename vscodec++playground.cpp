#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

bool isSorted (int a[], int n){
    if (n == 0 || n == 1){
        return true;
    }

    if (a[0]>a[1]){
        return false;
    }

    bool isSmallerSorted = isSorted(a+1, n-1);
/*
    if(isSmallerSorted){
        return true;
    }
    else{
        return false;
    */
    return isSmallerSorted;
}


int main(){
    

int a[]={1,2,3,5,4};
if(isSorted(a,5)){
    cout <<"Sorted"<<endl;}
else{
    cout<<"Not Sorted"<<endl;
}

return 0;
}

