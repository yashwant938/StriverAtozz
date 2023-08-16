#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dig=0;
    int rev=0;
    while(n>0){
        dig=n%10;
        rev=rev*10+dig;
        n/=10;

    }
    cout<<"reverse of a number is::="<<rev<<endl;
}