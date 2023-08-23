#include<bits/stdc++.h>
using namespace std;
 int findMaxConsecutiveOnes(vector<int>& nums){
        //     int start=0;
    //     int cnt=0;
    //     int tnt=0;
    //     int end=nums.size();
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[start]==1){
    //             cnt++;
    //             start++;
    //         }
    //         if(nums[start]==0){
    //             cnt=0;
    //         }
    //         if(nums[end]==1){
    //             tnt++;
    //             end--;
    //         }
    //         if(nums[end]==0){
    //             tnt=0;
    //         }
    //     }
    //     if(cnt>tnt){
    //         return cnt;
    //     }
    //     return tnt;
    // }
        int max=0;
        int count=0;
        for(int i=0;i<nums.size();i++){

            if(nums[i]==1){
                ++count;
            }else{
                if(count>max){
                    max=count;
                }
                count=0;
            }
        }
        if(count>max){
                    max=count;
                }
        return max;
 }
int main(){
   int n;
   cin>>n;
   int x;
   vector<int>vec;
   for(int i=0;i<n;i++){
    cin>>x;
    vec.push_back(x);
   }
   int ans=0;
   ans=findMaxConsecutiveOnes(vec);
   cout<<"answer is::"<<ans<<endl;


}