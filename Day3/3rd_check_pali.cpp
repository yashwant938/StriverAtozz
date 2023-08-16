#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dig=0;
    int rev=0;
    int temp=n;
    while(n>0){
        dig=n%10;
        rev=rev*10+dig;
        n/=10;

    }
    if(temp==rev){
        cout<<"palindrome::"<<endl;
    }else{
        cout<<"not palindrome::"<<endl;
    }

}