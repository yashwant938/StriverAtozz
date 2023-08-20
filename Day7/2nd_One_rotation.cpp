#include<bits/stdc++.h>
using namespace std;
void findKthRotation(vector<int>& vec) {
    int n = vec.size();
    int temp = vec[0];
    for(int i = 1; i < n; i++) {
        vec[i - 1] = vec[i];
    }
    vec[n - 1] = temp;
}
int main(){
    int n;
    cin>>n;
    int x;
    vector<int>vec;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    findKthRotation(vec);
     for(const auto &element : vec) {
        cout << element << " ";
    }
}