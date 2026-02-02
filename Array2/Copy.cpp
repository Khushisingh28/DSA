#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"Enter the array size : ";
    cin>>x;
    vector<int>v;
    cout<<"Enter the elements of array : ";
    for(int i = 0; i<x;i++){
      int y;
      cin>>y;
      v.push_back(y);
    }

    for(int i = 0;i<x;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>a;

    for(int i = v.size()-1;i>=0;i--){
         int y;
         y = v[i];
        a.push_back(y);
        // cout<<a[i];
    }
    for(int i = 0;i<a.size();i++){
        // a.push_back(v[i]);
         cout<<a[i]<<" ";
    }

}