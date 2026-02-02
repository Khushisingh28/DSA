#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int* p = &x;
    int y = 5;
    int* p2 = &y;
    cout<<*p+*p2<<endl;

    int k,a;
    int* q = &k;
    int* h = &a;
    cout<<"Enter first number : ";
    cin>>*q;
    cout<<"Enter second number : ";
    cin>>*h;
    cout<<*q + *h;
}