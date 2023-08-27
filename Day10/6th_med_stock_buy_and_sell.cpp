#include<bits/stdc++.h>
int stockBuyAndSell(std::vector<int>&arr){
 //BruteForice
//  int maxi=0,sum=0;
//  for(int i=0;i<arr.size();i++){
//     for(int j=i+1;j<arr.size();j++){
//         if(arr[j]>arr[i]){
//             sum=arr[j]-arr[i];
//         if(sum>maxi){
//             maxi=sum;
//         }else{
//             sum=0;
//         }
//     }
//  }   
// }
// return maxi;

//optimal
 int maxPro=0;
    int n=arr.size();
    int minPrice=INT_MAX;
    for (int i = 0; i<arr.size(); i++) {
        minPrice=std::min(minPrice, arr[i]);
        maxPro=std::max(maxPro, arr[i] - minPrice);
    }
    return maxPro;
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
   std::cout<<"stock sell the most"<< stockBuyAndSell(vec)<<std::endl;

}