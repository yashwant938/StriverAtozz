#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int gcd=1;
    //one way
    // for(int i=1;i<min(n,m);i++){
    //     if(n%i==0&&m%i==0){
    //         gcd=i;
    //         cout<<gcd<<endl;
    //     }
    // }


    //2nd way
    // for(int i=min(n,m);i>=1;i--){
    //     if(n%i==0&&m%i==0){
    //         cout<<i<<endl;
    //         break;
    //     }
    // }

    //euclodean algo
    // gcd(a,b)=gcd(a-b,b)
    //gcd(a,b)=gcd(a%b,b);
    //log of fi min (a,b)
    while(a>0&&b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
      

    }
      if(a==0){
        cout<<b<<endl;
      }else{
        cout<<a<<endl;
      }



}