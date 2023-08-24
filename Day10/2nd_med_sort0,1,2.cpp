#include<bits/stdc++.h>
void sortingArray(std::vector<int>&vec){
    int low=0,mid=0,high=vec.size()-1;
    // sort(vec.begin(),vec.end()); n logn
        while(mid<=high){
           if(vec[mid]==0){
               std::swap(vec[low++],vec[mid++]);
           }
           else if(vec[mid]==1){
               mid++;
           }
           else if(vec[mid]==2){
               std::swap(vec[mid],vec[high--]);
           }
        }
        // // sort(a,a+n);
        // sort(a.begin(),a.end());
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
    sortingArray(vec);
    for(auto it:vec){
        std::cout<<it<<std::endl;
    }


}