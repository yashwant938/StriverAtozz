#include<bits/stdc++.h>
void unionOfTwoVector(std::vector<int>&vec1,std::vector<int>&vec2){
    std::vector<int>ans;
    int left=0,lEnd=vec1.size();
    int right=0,rEnd=vec2.size();
    while(left<lEnd&&right<rEnd){
        if(vec1[left]==vec2[right]){
            ans.push_back(vec1[left]);
            left++;
            right++;
        } else if(vec1[left]<vec2[right]){
            ans.push_back(vec1[left]);
            left++;
        }else{
            ans.push_back(vec2[right]);
            right++;
        }
    }
   while(left<lEnd){
    ans.push_back(vec1[left]);
    left++;
   }
   while(right<rEnd){
    ans.push_back(vec2[right]);
    right++;
   }
 for(auto it:ans){
    std::cout<<it<<",";
 }
std::cout<<ans.size()<<std::endl;
// for(int i=0;i<ans.size();i++){
//     std::cout<<ans[i]<<",";
// }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int n;
std::cin>>n;
int m;
std::cin>>m;
std::vector<int>vec1;
std::vector<int>vec2;
int x;
for(int i=0;i<n;i++){
    std::cin>>x;
    vec1.push_back(x);
}
int y;
for(int i=0;i<m;i++){
    std::cin>>y;
    vec2.push_back(y);

}
unionOfTwoVector(vec1,vec2);


}