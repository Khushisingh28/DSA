#include<iostream>
using namespace std;
void change(int n,int *ptr1,int *ptr2){
    *ptr2 = n%10;
    while(n>9){
        n = n/10;
    }
    *ptr1 = n;
    return;
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int firstDigit , lastDigit;
    int* ptr1 = &firstDigit;
    int* ptr2 = &lastDigit;
    change(n,ptr1,ptr2);
    cout<<firstDigit<< " "<<lastDigit;
}