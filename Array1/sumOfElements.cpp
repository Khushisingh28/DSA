#include<iostream>
using namespace std;
int main(){
    // Calculate the sum of all elements 
    // in the given array
    int arr[5];
    int sum =0;
    cout<<"Enter the elements of array : ";
    for(int i = 0; i<5;i++){
        cin>>arr[i];
    }
    for(int i =0;i<5;i++){
        sum = sum +arr[i];
    }
    cout<<sum;
}