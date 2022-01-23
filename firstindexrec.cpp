#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int firstIndex(int a[], int n, int x, int i){
    if(i==n){
        return -1;
    }

    if(a[i]==x){
        return i;
    }

    return firstIndex(a,n,x,i+1);
}

int main(){
    int a[]={1,4,3,4,5};
    cout<<firstIndex(a,5,10,0);
    return 0;
}