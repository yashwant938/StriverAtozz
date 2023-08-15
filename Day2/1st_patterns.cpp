#include<iostream>
using namespace std;
// void firstPattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// void secondPattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// void thirdPattern(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//         cout<<j;
//         }
//         cout<<endl;
//     }
// }
// void fourthPattern(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }
// void fifthPattern(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// void sixthPattern(int n){
//     for(int i=1;i<=n;i++){
//         int x=1;
//         for(int j=n;j>=i;j--){
//             cout<<x;
//             x++;
//         }
//         cout<<endl;
//     }
// }
// void seventhPattern(int n){
//     for(int i=1;i<=n;i++){
//        //gap
//         for(int j=n;j>=i;j--){
//             cout<<" ";
//         }
//         //stars
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         //gap2
//          for(int j=n;j>=i;j--){
//             cout<<" ";

//         }
//         cout<<endl;
//     }
// }
// void eigthPattern(int n){
//     int x=n;
//     for(int i=1;i<=n;i++){
//        //gap
//         for(int j=2;j<=i;j++){
//             cout<<" ";
//         }
//         //stars
//         for(int j=1;j<=2*x-1;j++){
//             cout<<"*";
            
          
//         }
//         x-=1;
//             if(x==0){
//                 return;
//             }
//         //gap2
//           for(int j=2;j<=i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }


// void ninthPattern(int n){
//     for(int i=1;i<=n;i++){
//        //gap
//         for(int j=n;j>=i;j--){
//             cout<<" ";
//         }
//         //stars
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"*";
//         }
//         //gap2
//          for(int j=n;j>=i;j--){
//             cout<<" ";

//         }
//         cout<<endl;
//     }

//     int x=n;
//     for(int i=1;i<=n;i++){
//        //gap
//         for(int j=1;j<=i;j++){
//             cout<<" ";
//         }
//         //stars
//         for(int j=1;j<=2*x-1;j++){
//             cout<<"*";
            
          
//         }
//         x-=1;
//             if(x==0){
//                 return;
//             }
//         //gap2
//           for(int j=1;j<=i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
void tenthPattern(int n){
    //wrong code
    // for(int i=1;i<=n*2;i++){
    //     int x=0;
    //     for(int j=1;j<=i;j++){
    //        if(i<=(2*n)/2){ 
    //         cout<<"*";
    //        }else{
    //         // for(int k=1;k<=2*n-i;k++){
    //         //     cout<<"*";
    //         // }
    //          x=2*n-i;
    //         for(int k=1;k<=x;k++){
           
    //             cout<<"*";
    //         }


    //        }
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=2*n-1;i++){
        int star=i;
        if(i>n) star=2*n-i;
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    // firstPattern(n);
    // secondPattern(n);
    // thirdPattern(n);
    // fourthPattern(n);
    // fifthPattern(n);
    // sixthPattern(n);
    // seventhPattern(n);
    // eigthPattern(n);
    // ninthPattern(n);
    tenthPattern(n);
}