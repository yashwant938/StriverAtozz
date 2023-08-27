#include<bits/stdc++.h>
bool reve(std::vector<int>& vec,int left, int right) {
   if(left>=right){
    return true;
   }
   if(vec[left]!=vec[right]){
    return false;
   }
  return reve(vec,left+1,right-1);
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
if(reve(vec,0,vec.size()-1)){
    std::cout<<"reverse is pali "<<std::endl;
}else{
    std::cout<<"reverse is not pali"<<std::endl;
}
}
// #include <iostream>
// #include <vector>

// bool isPalindromeArray(const std::vector<int>& arr, int start, int end) {
//     // Base case: if the start index crosses or equals the end index
//     if (start >= end) {
//         return true;
//     }
    
//     // Compare the elements at start and end indices
//     if (arr[start] != arr[end]) {
//         return false;
//     }
    
//     // Recursively check the next pair of elements
//     return isPalindromeArray(arr, start + 1, end - 1);
// }

// bool isPalindrome(const std::vector<int>& arr) {
//     return isPalindromeArray(arr, 0, arr.size() - 1);
// }

// int main() {
//     std::vector<int> inputArray = {1, 2, 3, 2, 1};
//     if (isPalindrome(inputArray)) {
//         std::cout << "The array is a palindrome." << std::endl;
//     } else {
//         std::cout << "The array is not a palindrome." << std::endl;
//     }

//     return 0;
// }
