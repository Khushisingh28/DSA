#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>& a,vector<int>& b){
 int n = a.size();
 int m = b.size();
 
 vector<int> res(n+m);
 int i=0;
 int j=0;
 int k=0;
 while(i<=n-1 && j<=m-1){
    if(a[i]<b[j]){
     res[k]=a[i];
     i++;
     k++;
    }
    else{
        res[k]=b[j];
        j++;
        k++;
    }
 }
 //for remaining elements
 if(i==n){
    while(j<=m-1){
        res[k]=b[j];
        j++;
        k++;
    }
 }
 if(j==m){
    while(i<=n-1){
        res[k]=a[i];
        i++;
        k++;
    }
 }
 return res;
}


int main(){

    vector<int>a;
    a.push_back(1);
    a.push_back(4);
    a.push_back(5);
    a.push_back(8);
    for(int i=0; i<a.size();i++){
    cout<<a[i]<<" ";
}

cout<<endl;
    

    vector<int>b;
    b.push_back(2);
    b.push_back(3);
    b.push_back(6);
    b.push_back(7);
    b.push_back(10);
    b.push_back(12);
    for(int i=0; i<b.size();i++){
    cout<<b[i]<<" ";
}

cout<<endl;
   
 vector<int> v = merge(a,b);

 

 for(int i=0; i<v.size();i++){
     cout<<v[i]<<" ";
 }

}