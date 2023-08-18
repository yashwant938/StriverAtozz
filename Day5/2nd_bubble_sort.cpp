#include <bits/stdc++.h>
using namespace std;
void bubble(vector<int>&vec,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            if(vec[j]>vec[j+1]){
                int temp=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
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
    bubble(vec, n - 1);

    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }

    return 0;
}
