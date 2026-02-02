#include<iostream>
#include<vector>
using namespace std;

void sort01(vector<int>& v){
    int no0 =0 ,no1=0;
    for(int i=0;i<v.size();i++){
        // int x=0 , y =0;
        if(v[i]==0){
         no0++;
        }
        else{no1++;}
    }

    for(int i =0;i<v.size();i++){
        if(i<no0){
            v[i]=0;
        }
        else{v[i]=1;}
    }
}

void display(vector<int>v){
     for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    
   display(v);

   cout<<endl;

   sort01(v);

    // for(int i =0;i<v.size()-1;i++){
    //     cout<<v[i]<<" ";
    // }
    
   display(v);
    
}