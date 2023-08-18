#include <bits/stdc++.h>
using namespace std;

void merging(vector<int> &vec, int i, int mid, int n) {
    vector<int> temp;
    int left = i;
    int right = mid + 1;
    while (left <= mid && right <= n) {
        if (vec[left] <= vec[right]) {
            temp.push_back(vec[left]);
            left++;
        } else {
            temp.push_back(vec[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(vec[left]);
        left++;
    }
    while (right <= n) {
        temp.push_back(vec[right]);
        right++;
    }

    for (int k = i; k <= n; k++) {
        vec[k] = temp[k - i];
    }
}

void mrg(vector<int> &vec, int i, int n) {
    if (i < n) {
        int mid = (i + n) / 2;
        mrg(vec, i, mid);
        mrg(vec, mid + 1, n);
        merging(vec, i, mid, n);
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
    mrg(vec, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }

    return 0;
}
