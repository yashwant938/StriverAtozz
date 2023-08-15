#include<iostream>
using namespace std;
// void eleventhPattern(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//            if((i+j)%2==0){
//             cout<<"o";
//            }else{
//             cout<<"1";
//            }

//         }
//         cout<<endl;

//     }
// }
// void twelthPattern(int n){
//     int spaces = 2*(n-1);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//            cout<<j;

//         }
//          for(int j = 1;j<=spaces;j++){
//               cout<<" ";
//           }
//          for(int j=1;j<=i;j++){
//            cout<<j;

//         }
//         cout<<endl;
//         spaces-=2;

//     }
// }

// void thirteenthPattern(int n){
//     int x=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//           cout<<x;
//           x++;

//         }
//         cout<<endl;

//     }
// }

// void forteenthPattern(int n){
 
//     for(int i=1;i<=n;i++){
//           for(char ch = 'A'; ch<='A'+i;ch++){
//               cout<<ch<<" ";
              
//           }
//         cout<<endl;

//     }
// }

// void fifteenthPattern(int n){
 
//     for(int i=0;i<n;i++){
//           for(char ch = 'A'; ch<='A'+(n-i-1);ch++){
//               cout<<ch<<" ";
              
//           }
//         cout<<endl;

//     }
// }

 
//   void seventeenthPattern(int N)
// {
//       for(int i=0;i<N;i++){
//           for(int j=0;j<N-i-1;j++){
//               cout<<" ";
//           }
//           char ch = 'A';
//           int breakpoint = (2*i+1)/2;
//           for(int j=1;j<=2*i+1;j++){  
//               cout<<ch;
//               if(j <= breakpoint) ch++;
//               else ch--;
//           }
//           for(int j=0;j<N-i-1;j++){
//               cout<<" ";
//           }
//           cout<<endl;
          
//       }
// }
// void eigthteenthPattern(int n){
// for(int i=0;i<n;i++){
//           for(char ch =('A'+n-1)-i;ch<=('A'+n-1);ch++){
              
//               cout<<ch<<" ";
//           }
//           cout<<endl;
//       }
// }
// void ninteenthPattern(int n){
//     int iniS=0;
//     for(int i=0;i<n;i++){
//           for(int j=1;j<=n-i;j++){
//               cout<<"*";
//           }
//           for(int j=0;j<iniS;j++){
//               cout<<" ";
//           }
//           for(int j=1;j<=n-i;j++){
//               cout<<"*";
//           }
//           iniS+=2;
//           cout<<endl;
//       }
// }
// void twenteenthPattern(int n)
// {
//       int spaces = 2*n-2;
//       for(int i = 1;i<=2*n-1;i++){
//           int stars = i;
//           if(i>n) stars = 2*n - i;
//           for(int j=1;j<=stars;j++){
//               cout<<"*";
//           }
//           for(int j = 1;j<=spaces;j++){
//               cout<<" ";
//           }
//           for(int j = 1;j<=stars;j++){
//               cout<<"*";
//           }
//           cout<<endl;
//           if(i<n) spaces -=2;
//           else spaces +=2;
//       }
// }
// void twentyOnePattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//            if(i==0 || j==0 || i==n-1 || j==n-1)
//                 cout<<"*";
//              else cout<<" ";
//          }

            
        
//         cout<<endl;

//     }
// }
void twentyTwo(int n){
for(int i=0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
            int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
     cout<<(n- min(min(top,bottom), min(left,right)))<<" "; 
    }
    cout<<endl;

}
}
int main(){
    int n;
    cin>>n;
    // eleventhPattern(n);
    // twelthPattern(n);
    // thirteenthPattern(n);
    // forteenthPattern(n);
    // fifteenthPattern(n);
    // seventeenthPattern(n);
    // eigthteenthPattern(n);
    // ninteenthPattern(n);
    // twenteenthPattern(n);
    // twentyOnePattern(n);
    twentyTwo(n);
}