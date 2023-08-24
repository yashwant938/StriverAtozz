#include<bits/stdc++.h>
int maximumSubArra(std::vector<int>&vec){
    int first=0,last=vec.size()-1;
    // while(first<last){
    //     sum=
    // }
    int sum=0,max=0;
    for(int i=0;i<vec.size();i++){
        sum+=vec[i];
        if(sum>max){
            max=sum;
        }else{
            sum=0;
        }
    }
    return max;
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
  std::cout<<"maximum subarray sum is"<< maximumSubArra(vec)<<std::endl;

}