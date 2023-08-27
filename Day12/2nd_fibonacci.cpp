#include<bits/stdc++.h>
int fibonacci(int n ){
if(n==0||n==1){
    return n;
}
return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
      #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    std::cin>>n;
    std::cout<<"fibonacci of this number is"<<fibonacci(n)<<std::endl;

}