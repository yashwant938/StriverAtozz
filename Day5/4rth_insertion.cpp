#include <bits/stdc++.h>
using namespace std;
// void insertionSort(vector<int>& vec, int n) {
//     for (int i = 0; i <n; i++) {
//         for (int j = 0; j <=n; j++) {
//             if (vec[j] > vec[j+1]) {  
//                 swap(vec[j], vec[j+1]); 
//         }
//     }
// }
// }
void insertionSort(vector<int>& vec, int n) {
    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (vec[j] < vec[j-1]) {  
                swap(vec[j], vec[j-1]); 
            } else {
                break;
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
    insertionSort(vec, n - 1);

    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }

    return 0;
}
