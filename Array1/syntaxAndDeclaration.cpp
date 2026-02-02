#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of array :";
    cin>>n;
    int arr[n]; // 0 1 2
    cout<<"Enter the elements of array : ";
    for (int i =0;i<=2;i++){
        cin>>arr[i];
    }
    cout<<"Elements of array are :: ";
    for(int i =0;i<=2;i++){
        cout<< arr[i]<<" ";
    }
}