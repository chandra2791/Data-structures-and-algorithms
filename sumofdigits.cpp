
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int sumofdig(int n){
if (n == 0) return 0;

int smallans = n + sumofdig(n-1);

return smallans;

}

int main(){


cout << sumofdig(3);
return 0;
}
