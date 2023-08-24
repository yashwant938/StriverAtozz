#include <bits/stdc++.h>

std::vector<std::pair<int, int>> twoSum(std::vector<int>& vec, int k) {
    std::vector<std::pair<int, int>> pr;
    int sum = 0;
    int first = 0,last = vec.size() - 1;
    std::sort(vec.begin(), vec.end());
    while (first < last) {
        sum = vec[first] + vec[last];
        if (sum > k) {
            last--;
        } else if (sum < k) {
            first++;
        } else {
            pr.push_back({vec[first], vec[last]});
            return pr;
        }
    }
    return pr;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    std::cin >> n;
    int x;
    std::vector<int> vec;
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        vec.push_back(x);
    }
    int k;
    std::cin >> k;
    std::vector<std::pair<int, int>> result = twoSum(vec, k);
    for (const auto& pair : result) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
    return 0;
}