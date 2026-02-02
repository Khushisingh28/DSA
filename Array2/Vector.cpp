#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;// you need not to mention size
v.push_back(6);
cout<<v.size()<<" ";
cout<<v.capacity()<<" ";
v.push_back(9);
cout<<v.size()<<" ";
cout<<v.capacity()<<" ";
v.push_back(10);
cout<<v.size()<<" ";
cout<<v.capacity()<<" ";

//if you want to update / access
cout<<v[0]<<" ";
cout<<v[1]<<" ";
cout<<v[2]<<" ";
}