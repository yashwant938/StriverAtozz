// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     list<int>lt;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
       
//     }
//      for(int i=0;i<n;i++){
//         lt.push_back(arr[i]);
       
//     }
//     int index=0;
//     for(auto it:lt){
//         arr[index]=it;
//         index++;
//     }

//     for(int i=0;i<index;i++){
//         cout<<arr[i]<<" ";
//     }

// }
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    list<int>lt;
    int arr[n];

    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for (int i=0; i<n;i++) {
        if(find(lt.begin(),lt.end(),arr[i])==lt.end()) {
            lt.push_back(arr[i]);
        }
    }

    for (const auto &element:lt) {
        cout<<element<<" ";
    }

    return 0;
}
