#include<bits/stdc++.h>
int subArraySum(std::vector<int>&vec,int k){
   int sum=0,cnt,max=0;
    for(int  i=1;i<vec.size();i++)
    {
        cnt=0;
        for(int j=i;j<=vec.size();j++){
            sum+=vec[j];
            if(sum==k){
                cnt=j-i+1;
                if(cnt>max){
                    max=cnt;
                }

            }
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
    for(int i=1;i<=n;i++){
        std::cin>>x;
        vec.push_back(x);
    }
    int k;
    std::cin>>k;
  
     x=subArraySum(vec,k);
    std::cout<<x<<" is the number of elment in an subarray equivalent to k"<<std::endl;

}