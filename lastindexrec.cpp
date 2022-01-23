#include <iostream>
using namespace std;

int lastIndex(int a[], int n, int x, int i){
    if(i==-1){
        return -3;
    }

if (a[i]==x){
    return i;
}

return lastIndex(a,n,x,i-1);
}



int main(){
    int a[] = {1,2,3,4,4};
    cout<<lastIndex(a,5,4,4)<<endl;
    return 0;
}