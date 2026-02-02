#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;// you need not to mention size

v.push_back(6);// 1 1
v.push_back(9);// 2 2
v.push_back(10);// 3 4
v.push_back(23);//4 4
v.push_back(27);// 5 8
v.push_back(6);// 6 8
v.push_back(9);// 7 8
v.push_back(10);// 8 8
v.push_back(23);// 9 16
v.push_back(27);//10 16 
v.push_back(6);// 11 16
v.push_back(9);// 12 16
v.push_back(10);// 13 16
v.push_back(23);// 14 16
v.push_back(27);// 15 16
 cout<<v.size();
 cout<<endl;
 cout<<v.capacity()<<endl;

 
 v.pop_back();
 v.pop_back();
 v.pop_back();
 v.pop_back();
 v.pop_back();

 cout<<v.size();
 cout<<endl;
 cout<<v.capacity();

 



}

