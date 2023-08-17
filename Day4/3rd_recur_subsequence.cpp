#include<bits/stdc++.h>
 using namespace std;
 void printingg(int i,vector<int>&ds,int arr[],int n){
    if(i==n){
        for(auto it:ds){
            cout<<it<<", ";
        }
        if(ds.size()==0){
            cout<<"{ }";
        }
        cout<<endl;
        return;
    }
    //take
    ds.push_back(arr[i]);
    printingg( i+1,ds,arr,n);
    ds.pop_back();
    printingg(i+1,ds,arr,n);
 }
int main()
{
#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 
#endif
int arr[]={3,1,2};
vector<int>ds;
int n=3;
printingg(0,ds,arr,n);
    return 0;
}