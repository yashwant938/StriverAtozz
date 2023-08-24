#include<bits/stdc++.h>
void leaderOrNot(std::vector<int>&vec){
    int n=vec.size()-1;
    std::list<int>ls;
    int max=vec[n];
    ls.push_back(vec[n]);
    n=n-1;
   while(n!=0){
    if(vec[n]>max){
        ls.push_back(vec[n]);
        max=vec[n];

    }
    n--;
   }
   for(auto it:ls){
    std::cout<<it<<std::endl;
   }
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
    leaderOrNot(vec);

}