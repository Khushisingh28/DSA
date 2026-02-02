#include<iostream>
using namespace std;

void greeting(){
    cout<<"Good Morning"<<endl;
    cout<<"Have a nice day";
}

void starTriangle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
        cout<<"*";
        }
    
    cout<<endl;
    }
}

int main(){

    starTriangle(3);
    starTriangle(4);
    starTriangle(5);

   // greeting();// function calling
    
    
    // int n=3;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int k=4;
    // for(int i=1;i<=k;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // int a=5;
    // for(int i=1;i<=a;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
}