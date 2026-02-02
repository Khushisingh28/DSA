#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array :";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the element you want to search :";
    cin>>target;
    // Check Mark
    bool flag = false;
    for(int i=0;i<n;i++){
        if(target == arr[i]){
        bool flag = true;
            break;
        }
    }
    if (flag == true){
        cout<<"Present ";}
        else {
            cout<<"Not present";
        }
    }
