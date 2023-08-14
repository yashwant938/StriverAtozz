#include<iostream>
using namespace std;
int evenOdd(int *a){
if(*a%2==0){
    *a=13;
    return 1;
}else{
    *a=123;
    return 0;

}
}
int main(){
    int n;
    cin>>n;
    if(evenOdd(&n)){

    cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;
    }
    cout<<n<<endl;
}