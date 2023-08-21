#include<bits/stdc++.h>
void moveZeroesToEnd(std::vector<int>&vec){
    int left=0,right=vec.size()-1;
    while(left<right){
        if(vec[left]==0&&vec[right]!=0){
            std::swap(vec[left],vec[right]);
            left++;
            right--;
        }else if(vec[left]!=0){
            if(vec[right]==0){
                right--;
            }
            // else{
            //     continue;    
            // } getting error while using it
            left++;

        }else{
                left++;
                right++;
        }
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    std::cin>>n;
    std::vector<int>vec;
    int x;
    for(int i=0;i<n;i++){
        std::cin>>x;
        vec.push_back(x);
    }
    moveZeroesToEnd(vec);
    for(int i=0;i<vec.size();i++){
        std::cout<<vec[i]<<",";
    }

    
}

