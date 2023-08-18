#include <bits/stdc++.h>
using namespace std;
void selection(vector<int>& vec, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (vec[j] < vec[i]) {  
                swap(vec[j], vec[i]); 
        }
    }
}
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    vector<int> vec;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    selection(vec, n - 1);

    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }

    return 0;
}
