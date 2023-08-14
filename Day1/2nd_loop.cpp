//for loop
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<",";
//     }

// }
//while and do while
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n){
        cout<<"hey man this is"<<","<<n<<endl;
        n--;
    }

    int x;
    cin>>x;
    do{
        cout<<"this is"<<","<<x<<endl;
        x--;
    }while(0);

}
