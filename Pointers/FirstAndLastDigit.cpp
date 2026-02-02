#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int ld = n%10;
    cout<<"Last Digit of the number is :"<<ld<<endl;
    while(n>9){
        n = n/10;
    }
    cout<<"First Digit is : "<<n;
}