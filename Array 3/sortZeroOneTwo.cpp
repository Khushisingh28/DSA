#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

void sort(vector<int>& v){
    int n = v.size()-1;
    int no0 =0;
    int no1 =0;
    int no2 = 0;
    
    for(int i = 0; i<v.size();i++){
        if(v[i]==0){
            no0++;
        }
        else if (v[i]==1){
            no1++;
        }
        else{
            no2++;
        }
    }
    
    for(int i=0;i<v.size();i++){
        if(i<no0){
            v[i]=0;
        }
        else if(i<(no0+no1)){
           v[i]=1;
        }
        else{
            v[i]=2;
        }
    }
}
int main(){

vector<int>v;
v.push_back(2);
v.push_back(0);
v.push_back(2);
v.push_back(1);
v.push_back(1);
v.push_back(0);
 display(v);
 cout<<endl;
 sort(v);
 display(v);
}