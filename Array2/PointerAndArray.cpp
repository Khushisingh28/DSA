#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,6,5,8};
    int* ptr = arr;//arr[0]  giving address
    cout<<ptr<<endl;
    ptr[0]=8;//*ptr=8 only to make change in zeroth element
    for(int i =0;i<5;i++){
        cout<<ptr[i]<<" ";
    }
    // for(int i =0;i<5;i++)
   // {
   //     cout<<*ptr<<" ";
   //     ptr++;
   //  }

}