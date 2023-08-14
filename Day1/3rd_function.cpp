#include<iostream>
using namespace std;
void evenOdd(int n){
    if(n%2==0){
        cout<<"even"<<n<<endl;
    }else{
    cout<<"odd"<<n<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    evenOdd(n);
}