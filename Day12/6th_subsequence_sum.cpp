#include<bits/stdc++.h>

void printF(int ind,std::vector<int>&ds,int s,int sum,int arr[],int n){
    
    if(ind==n){
        if(s==sum){
        for(auto it:ds)
            std::cout<<it<<",";
        std::cout<<std::endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];
    printF(ind+1,ds,s,sum,arr,n);
    s-=arr[ind];
    ds.pop_back();
    printF(ind+1,ds,s,sum,arr,n);
}
int main(){
      #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int arr[]={1,1,2};
    int n=3;
    int sum=2;
    std::vector<int>ds;
    printF(0,ds,0,sum,arr,n);
}