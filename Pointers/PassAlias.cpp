#include<iostream>
using namespace std;
void swap(int &x, int &y){  // Pass By Reference
    int temp ;
    temp = x;
    x = y;
    y = temp;
    return;
}
int main(){

int a =4;
int b= 5;
swap(a,b);
cout<<a<<" "<<b;
}