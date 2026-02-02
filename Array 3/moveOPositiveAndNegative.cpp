#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>a ){
    for(int i =0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

}

void movePosAndNeg(vector<int>& a){
    int i =0;
    int y = a.size()-1;
    while(i<y){
        if(a[i]<0){
            i++;
        }
        if(a[y]==0 || a[y]>0){
            y--;
        }
        if(i>y){
            break;
        }
        if(a[i]>0 && a[y]<0){
            int temp = a[i];
            a[i]=a[y];
            a[y]=temp;
            i++;
            y--;
        }
    }
    
}

int main(){
    vector<int>v;
    int x;
    cout<<"Enter vector size :";
    cin>>x;
    cout<<"Enter vector elements : ";
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }

    display(v);
     cout<<endl;

     movePosAndNeg(v);

    cout<<endl;

    display(v);

}