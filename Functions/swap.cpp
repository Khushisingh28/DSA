#include<iostream>
using namespace std;
void swap(int a, int b){
    int temp ;
    temp =a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
}
int main(){
    int x;
    cout<<"Enter first number : "<<endl;
    cin>>x;
    int y;
    cout<<"Enter second number  : ";
    cin>>y;
    swap(x,y);
}
