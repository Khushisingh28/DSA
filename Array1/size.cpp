#include<iostream>
using namespace std;
int main(){
    // LENGTH OF ARRAY 
    int arr[]={1,2,56,7,98,4,5,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<len;
}