#include<bits/stdc++.h>
std::vector<int> reArrange(std::vector<int>&vec){
//     std::vector<int>pos;
//     std::vector<int>neg;
//     for(int i=0;i<vec.size();i++){
//         if(vec[i]>0){
//             pos.push_back(vec[i]);
//         }else{
//             neg.push_back(vec[i]);
//         }

//     }
//     for(int i=0;i<vec.size()/2;i++){
//         vec[2*i]=pos[i];
//         vec[2*i+1]=neg[i];
//     }
//    for(auto it:vec){
//         std::cout<<it<<std::endl;
//     }

 int n = vec.size();
  std::vector<int> ans(n,0);
  int posIndex = 0, negIndex = 1;
  for(int i = 0;i<n;i++){
      if(vec[i]<0){
          ans[negIndex] = vec[i];
          negIndex+=2;
      }
      else{
          ans[posIndex] = vec[i];
          posIndex+=2;
      }
  }
  
  return ans;
    

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
    // reArrange(vec);
    std::vector<int>ans=reArrange(vec);
    for(auto it:ans){
        std::cout<<it<<std::endl;
    }
}