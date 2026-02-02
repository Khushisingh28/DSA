#include<iostream>
using namespace std;
int main(){
    int x = 4;
    int* ptr = &x;

//    cout<<ptr<<endl;// 0x61ff08
//    ptr = ptr + 1;// ptr 4 bits shif ho jayega
//    cout<<ptr<<endl; // 0x61ff0c

cout<<*ptr<<endl; // 4
// ptr = ptr +1;  // ptr 4 bits shift ho gaya
// cout<<*ptr;  // naye address pe 4 nhi hai

*ptr = *ptr+1; // (*ptr)++;
cout<<*ptr<<endl;


}