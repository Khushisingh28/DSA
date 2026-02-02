#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v){
for(int i =0;i<v.size();i++){
    cout<<v[i]<<" ";
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

// int i = 0;
// int j =v1.size()-1;
// while(i<=j){
//     int temp=v1[i];
//     v1[i]=v1[j];
//     v1[j]=temp;
//     i++;
//     j--;
// }

for(int i = 0 , j = v1.size()-1; i<=j; i++,j--){
     int temp=v1[i];
     v1[i]=v1[j];
    v1[j]=temp;
}

display(v1);

}