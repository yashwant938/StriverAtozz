#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    switch(n){
        case 1: cout<<"you have choose one"<<endl;
                cout<<"do uthak bathak"<<endl;
                break;
        case 2: cout<<"you have choose two"<<endl;
                cout<<"do dance"<<endl;
                // continue; continue is used in loop to skip the iteration
        default:
                cout<<"do nothing"<<endl;
    }
}