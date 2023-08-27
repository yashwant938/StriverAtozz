#include<bits/stdc++.h>
int fact(int n ){
if(n==1){
    return 1;
}
return n*fact(n-1);
}
int main(){
      #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    std::cin>>n;
    std::cout<<"factorial of this number is"<<fact(n)<<std::endl;

}