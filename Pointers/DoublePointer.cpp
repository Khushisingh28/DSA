#include<iostream>
using namespace std;
int main(){
    int x =5 ;
    int* ptr = &x;
    int** p = &ptr;
    cout<<ptr<<" "<<p<<endl<<*ptr<<endl<<**p;
}