#include<iostream>
using namespace std;
int gcd(int x, int y){
    int hcf =1;
    for(int i=1;i<=min(x,y);i++){
        if(x%i==0 && y%i==0){// i is common factor
        hcf =i;
        }
    }
    return hcf;
}
int main(){
    int a;
    cout<<"Enter first Number :";
    cin>>a;
    int b;
     cout<<"Enter Second Number :";
     cin>>b;
     cout<<gcd(a,b);
}