#include<bits/stdc++.h>
int numberAppearsOnce(std::vector<int>&vec){
   int x=0;
    for(int i=0;i<vec.size();i++){
        // if(vec[i]!=vec[i+1]){
        //       return vec  
        // }
        x=x^vec[i];
    }
    return x;
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
    int t;

    t=numberAppearsOnce(vec);
    std::cout<<t<<"is the number apears Once"<<std::endl;

}