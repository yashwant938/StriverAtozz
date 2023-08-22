#include<bits/stdc++.h>
int findMissingNumber(std::vector<int>&vec,int n){
    int sum=n*(n+1)/2;
    int maxi=0;
    for(int i=1;i<=vec.size();i++){
        maxi+=vec[i];
    }
    return sum-maxi-1;
}
int main(){
  #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    std::cin>>n;
    std::vector<int>vec;
    int x;
    for(int i=1;i<n;i++){
        std::cin>>x;
        vec.push_back(x);
    }
    std::cout<<"missing_number"<<std::endl<<findMissingNumber(vec,n);
}