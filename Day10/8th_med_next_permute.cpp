#include<bits/stdc++.h>
//mistake i did
// void nxtPermut(std::vector<int>&vec){
//     std::next_permutation(vec,vec+vec.size());
//     return vec;
// }
std::vector<int> nxtPermut(std::vector<int>& vec) {
    std::next_permutation(vec.begin(), vec.end());
    return vec;
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
    // std::vector<int>ans;
     std::vector<int> nextPerm = nxtPermut(vec);
   for(auto it:vec){
    std::cout<<it<<std::endl;
   }

}