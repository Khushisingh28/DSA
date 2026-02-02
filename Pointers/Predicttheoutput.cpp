#include<iostream>
using namespace std;
int main(){
    int a =15; // assume the address of a is 1000.
    int *ptr = &a;
    int b = ++(*ptr); // preincrement
    cout<<a<<" "<<b;
}