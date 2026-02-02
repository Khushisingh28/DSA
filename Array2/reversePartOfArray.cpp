#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
for(int i =0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}

void reverse(int i , int j ,vector<int>& a){
    while(i<=j){
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
            }
}

int main(){
    vector<int>v1;

    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(4);

display(v1);
cout<<endl;
// for(int i=0,j=3;i<=j;i++,j--){
//     int temp = v1[i];
//     v1[i]=v1[j];
//     v1[j]=temp;
// }

// reverse(v1.begin(),v1.end());

reverse(0,2,v1);

display(v1);

}