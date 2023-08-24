#include<bits/stdc++.h>
int kadaneyAlgo(std::vector<int>&arr, int n) {
    // int maxi = INT_MIN;
    // for (int i = 0; i < n; i++) {
    //     int sum = 0;
    //     for (int j = i; j < n; j++) {
    //         sum += arr[j];
    //         maxi = max(maxi, sum); 
    //     }
    // }

    // return maxi;
    long long maxi = LONG_MIN; 
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > maxi) {
            maxi = sum;
        }
        if (sum < 0) {
            sum = 0;
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
    int x;
    std::vector<int>vec;
    for(int i=0;i<n;i++){
        std::cin>>x;
        vec.push_back(x);
    }
    std::cout<<"maxi subarray is"<<kadaneyAlgo(vec,vec.size())<<std::endl;

}