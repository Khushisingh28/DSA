#include<iostream>
using namespace std;
void fun(int x ,int y){
   cout<<"Address of main fun x  "<<&x<<endl;
    cout<<"Address of main  fun y "<<&y<<endl;
}
int main(){
    int x=7;
    int y=8;
    cout<<"Address of main x  "<<&x<<endl;
    cout<<"Address of main y "<<&y<<endl;
    fun(x,y);
}