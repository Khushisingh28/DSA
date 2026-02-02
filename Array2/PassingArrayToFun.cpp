#include<iostream>
using namespace std;
    void display(int a[],int size){
    for(int i=0;i<size-1;i++){
        cout<<a[i]<<" ";
    }
    }
    void change(int b[],int size){
        b[0]=9;
    }
    int main(){
        int arr[5]={1,4,3,2,4};
        int size = sizeof(arr)/sizeof(arr[0]);
        display(arr,size);
        change(arr,size);
        cout<<endl;
        display(arr,size);
    }