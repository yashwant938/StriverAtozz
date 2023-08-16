#include<iostream>
using namespace std;
void recursion(int n,int i){
    if(n==i){
        return;
    }
    recursion(n-1,i);
    cout<<n<<endl;

}
int main(){
    int n;
    cin>>n;
    int i=1;
    recursion(n,i);
}