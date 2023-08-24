#include<bits/stdc++.h>
void MajorityElementOneByThree(std::vector<int>&vec){
// for(int i=0;i<vec.size();i++){
//     if()
// }
 std::unordered_map<int, int> countMap;
    for (int num : vec) {
        countMap[num]++;
    }
    int threshold = vec.size() / 3;
    for (auto& entry : countMap) {
        if (entry.second > threshold) {
            std::cout << "Element" << entry.first << "more than 1/3 of the time::" << std::endl;
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
 
    MajorityElementOneByThree(vec);
   

}