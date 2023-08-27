#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void findCombi(int ind, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds) {
        if (ind == arr.size()) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }

        if (arr[ind] <= target) {
            ds.push_back(arr[ind]);
            findCombi(ind, target - arr[ind], arr, ans, ds);
            ds.pop_back();
        }
        findCombi(ind + 1, target, arr, ans, ds);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombi(0, target, candidates, ans, ds);
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> candidates = {2, 3, 6, 7}; // Example candidates array
    int target = 7; // Example target value
    vector<vector<int>> result = solution.combinationSum(candidates, target);

    // Display the resulting combinations
    for (const vector<int>& combi : result) {
        for (int num : combi) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
