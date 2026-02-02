#include<iostream>
using namespace std;
// int fact(int a){
//     int f =1;
//     for(int i =2;i<=a;i++){
//         f = f*i;
//     }
//     return f;
// }

int main(){
    int n;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    int fact =1;
    for(int i =1;i<=n;i++){
    // cout<<fact(i)<<endl;
    fact *=i;
    cout<<fact<<endl;
    }
}
