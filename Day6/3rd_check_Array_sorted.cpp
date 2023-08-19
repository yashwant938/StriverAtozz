#include<bits/stdc++.h>
using namespace std;
bool binarySort(int arr[],int i,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(binarySort(arr,0,n)){
        cout<<"sorted"<<endl;
    }else{
        cout<<"not sorted"<<endl;
    }
}