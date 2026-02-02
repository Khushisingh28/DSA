#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x ;
    cout<<" Enter Target : " ;
    cin>>x;
    vector<int>v;
    int n;
    cout<<"Enter the arraysize : ";
    cin>>n;
    cout<<"Enter the elements in array : ";
    for(int i =0;i<n;i++){
      int q ;
      cin>>q;
       v.push_back(q);
    // cin>>v[i];
    }

    for(int i =0;i<=v.size()-2;i++){
        for(int j = i+1;j<=v.size()-1;j++){
            if(v[i]+v[j]==x){
              cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}