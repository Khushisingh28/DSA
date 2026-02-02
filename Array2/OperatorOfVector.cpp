#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v;// you need not to mention size
v.push_back(6);
v.push_back(9);
v.push_back(10);
v.push_back(23);
v.push_back(27);

for(int i =0;i<v.size();i++){
    cout<<v[i]<<" ";
}
v.pop_back();
v.pop_back();
cout<<endl;
for(int i =0;i<v.size();i++){
    cout<<v[i]<<" ";
} 
}

