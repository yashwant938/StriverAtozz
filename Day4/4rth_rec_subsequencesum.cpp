#include<bits/stdc++.h>
 using namespace std;
 void printingg(int i,vector<int>&ds,int arr[],int n,int sum,int s){
    if(i==n){
        if(s==sum){
        for(auto it:ds){
            cout<<it<<", ";
        }
        cout<<endl;
        }
        // if(ds.size()==0){
        //     cout<<"{ }";
        // }
       
        cout<<endl;
        return;
    }
    //take
    ds.push_back(arr[i]);
    s+=arr[i];
    printingg( i+1,ds,arr,n,sum,s);
    s-=arr[i];
    ds.pop_back();
    printingg(i+1,ds,arr,n,sum,s);
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

int sum=3;

printingg(0,ds,arr,n,sum,0);
    return 0;
}