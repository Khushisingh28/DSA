#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
     for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

void sort01(vector<int>& a){
    int i=0;
    int y = a.size()-1;
  while(i<y){
     if(a[y]==1){
        y--;
     }
     if(a[i]==0){
        i++;
     }

     if(i>y){
        break;
     }
     if(a[i]==1 && a[y]==0){
        int temp =a[i];
        a[i]=a[y];
        a[y]=temp;
        i++;
        y--;
     }
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
    cout<<" ";
    sort01(v);
    display(v);
}