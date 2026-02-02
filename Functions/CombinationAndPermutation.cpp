#include<iostream>
using namespace std;

int fact(int a){
    int f =1;
    for(int i =2;i<=a;i++){
        f = f*i;
    }
    return f;
}

int combination(int n,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}

int permutation(int n,int r){
    int npr = fact(n)/fact(n-r);
    return npr;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int r;
    cout<<"Enter r : ";
    cin>>r;

    int ncr = combination(n,r) ;
    int npr =permutation(n,r) ;


    cout<<ncr<<endl<<npr;

    // int nfact = fact(n);
    // int rfact = fact(r);
    // int nrfact =fact(n-r);
    // int ncr = fact(n)/(rfact*nrfact);
    // cout<<ncr;

//     int nfact =1;
//     for(int i=2;i<=n;i++){
//         nfact *= i;// nfact = nfact*i;
//     }
//     cout<<nfact<<endl;

//    int rfact =1;
//     for(int i=2;i<=r;i++){
//         rfact *= i;// nfact = nfact*i;
//     }
//     cout<<rfact<<endl;

//     int nrfact = 1;
//     for(int i=2;i<=n-r;i++){
//         nrfact= nrfact*i;
//     }
//     cout<<nrfact<<endl;

//     int nCr= (nfact)/(rfact*nrfact);
//     cout<<nCr;

}