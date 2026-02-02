#include<iostream>
#include<vector>
using namespace std;
void display (vector<int>v){
for(int i=0; i<v.size();i++){
    cout<<v[i]<<" ";
   }

}
vector<int> merge(vector<int>& a,vector<int>& b){
    int n =a.size();
    int m =b.size();
    int i =n-1;
    int j=m-1;
    int k=n+m-1;
    vector<int>l;
    while(i>=0 && j>=0){
        if(a[i]>b[j]){
            l[k]=a[i];
            i--;
            k--;
        }
        else{
            l[k]=b[j];
            j--;
            k--;
        }
    }
    while(i==0 && j<=0){
        l[k]=b[j];
        j--;
        k--;
    }
    while(j==0 && i>=0){
        l[k]=a[i];
        i--;
        k--;
    }
    return l;
}
int main(){
    vector<int>a;
    a.push_back(1);
    a.push_back(4);
    a.push_back(5);
    a.push_back(8);
    display(a);
   cout<<endl;
    

    vector<int>b;
    b.push_back(2);
    b.push_back(3);
    b.push_back(6);
    b.push_back(7);
    b.push_back(10);
    b.push_back(12);
    display(b);
    cout<<endl;
    vector<int>h = merge(a,b);
    display(h);
}