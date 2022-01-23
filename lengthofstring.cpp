#include <iostream>
using namespace std;

int length(char input[]){

int count =0;
for (int i = 0; input[i] != '\0';i++)
    count++;

return count;
}

void reverse (char input[]){
int s = 0;
int e = length(input) - 1;
while (s<e){
    swap(input[s], input[e]);
}
}

int main(){

char name[10];
cout<<"Enter your name:\n";
cin.getline(name,100);

cout <<"Your name is "<< name<<endl;
cout<<length(name)<<endl;
reverse(name);
cout<<name<<"  is your name reversed.";

return 0;
}
