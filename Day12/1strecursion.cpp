#include<bits/stdc++.h>
int summiTion(std::vector<int>& vec, int n) {
    if (n == 0) {
        return 0;  
    }
    return vec[n - 1] + summiTion(vec, n - 1); 
}

int main(){
      #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    std::cin>>n;
    int x;
    std::vector<int>vec;
    for(int i=0;i<n;i++){
        std::cin>>x;
        vec.push_back(x);
    }
    std::cout<<"summition is"<<summiTion(vec,vec.size())<<std::endl;
}