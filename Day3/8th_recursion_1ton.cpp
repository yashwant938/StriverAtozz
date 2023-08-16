#include<iostream>
using namespace std;
void recursion(int n,int i){
   if(n==i){
    cout<<i<<endl;
    return;
   }
   cout<<i<<endl;
    recursion(n,i+1);
    

}
int main(){
    int n;
    cin>>n;
    int i=1;
    recursion(n,i);
}