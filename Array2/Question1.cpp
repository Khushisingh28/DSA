#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
for(int i =0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}

void reverse(vector<int>& a){
    for(int i=0 ,j=a.size()-1;i<=j;i++,j--){
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}

void reversePart(int i , int j ,vector<int>& a){
    while(i<=j){
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
            }
}

int main(){

     // IF NO. OF RATATIONS IS GREATER THAN THE SIZE OF ARRAY THEN
    // LET SIZE BE X AND ROATION BE Y THEN Y%X WILL BE NO. OF RATATIONS

    vector<int>a;
    int x;
    cout<<"Enter the size of vector :";
     cin>>x;
     cout<<"Enter the elements of vector : ";
    for(int i =0;i<x;i++){
        int y;
        cin>>y;
       a.push_back(y);
    }
    cout<<endl;

    display(a);
    cout<<endl;
    reverse(a);
    display(a);
    cout<<endl;
    reversePart(0,1,a);
    reversePart(2,a.size()-1,a);
    display(a);
}
