#include<bits/stdc++.h>
 using namespace std;
 int printingg(int i,vector<int>&ds,int arr[],int n,int sum,int s){
    if(i==n){
        if(s==sum){
            return 1;
        }
        return 0;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    int l=printingg( i+1,ds,arr,n,sum,s);
    s-=arr[i];
    ds.pop_back();
    int r= printingg(i+1,ds,arr,n,sum,s);

    return l+r;
 }
int main()
{
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 
#endif
int arr[]={3,1,2,3};
vector<int>ds;
int n=4;

int sum=6;

cout<<printingg(0,ds,arr,n,sum,0)<<":";
    return 0;
}