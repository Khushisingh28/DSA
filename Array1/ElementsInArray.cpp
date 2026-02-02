#include<iostream>
using namespace std;
int main(){
    //Count the number of elements in given
    //array greater than a given number x.
      int n;
    cout<<"Enter the number of elements of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array :";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element :";
    cin>>target;
    int length=0;
    for(int i=0;i<n;i++){
        if(target<arr[i]){
            length++;
        }
    }
    cout<<length;
}