#include<iostream>
#include<vector>

using namespace std;

int main(){
   // vector<int> *vp = new vector<int>();
   // vector<int> v;
/*
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout <<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;

    v.push_back(23);
    v.push_back(324);

    cout << v.at(4)<<endl;
    //cout << v.at(100)<<endl;
    
    int i = 0;

    do{
        cout<<v[i]<<endl;
        i++;
    }while (i<v.size());

    for (int i=0;i<100;i++){
        v.push_back(i+1);
    }

    //output

    for (int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
        cout <<"size "<<v.size();
    }

    cout<<"\n\n\n\n\n\n\n";
*/
/*
    vector<int> v2(10,-2);
    for (int i=0;i<v2.size();i++){
        cout<<v2[i]<<endl;
    */

  // vector<int> v;
/*
v.push_back(10);

v.push_back(20);

v[0] =  15;

for(int i = 0; i < v.size(); i++){

    cout << v[i] << " ";

}*/
    
vector<int> v(4,12);

v.push_back(15);

cout << v.size() <<" "<<v.capacity() << " ";

v.push_back(25);

cout << v.size() <<" "<< v.capacity();
    return 0;
}