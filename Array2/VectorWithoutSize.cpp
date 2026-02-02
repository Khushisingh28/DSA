#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int x;
    cout<<"Enter the no. of elements of vector : ";
    cin>>x;
    cout<<"Enter the elements of vector : ";
    for(int i =0 ; i<x ; i++){
      int y;
      cin>>y;
      v.push_back(y);
    }

for(int i =0; i<x; i++){
    cout<<v[i]<<" ";
}
}