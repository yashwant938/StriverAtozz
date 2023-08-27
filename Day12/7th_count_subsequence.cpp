#include<bits/stdc++.h>

int printF(int ind,int s,int sum,int arr[],int n){
    
    if(ind==n){
        if(s==sum){
        return 1;
        }else{
        return 0;
        }
    }
    s+=arr[ind];
    int l=printF(ind+1,s,sum,arr,n);
    s-=arr[ind];
   int r= printF(ind+1,s,sum,arr,n);
   return l+r;
}
int main(){
      #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int arr[]={1,2,1};
    int n=3;
    int sum=2;

    std::cout<<"total number of pairs"<<printF(0,0,sum,arr,n)<<std::endl;
}