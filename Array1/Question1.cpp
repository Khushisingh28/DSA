#include<iostream>
using namespace std;
int main(){
    // Given an array of marks of students
    // if the marks of student is less
    // than 35 print its roll number.
    int arr[5];
    cout<<"Enter the marks of students :";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]<35){
            cout<<i<<" ";
        }
    }
}