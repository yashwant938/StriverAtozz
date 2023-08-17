#include<iostream>
using namespace std;
bool checkPali(int i,string &str){
   
    // cout<<n<<endl;
  
 if(i>=str.size()/2) return true;
 if(str[i]!=str[str.size()-i-1]) return false;

return checkPali(i+1,str);
}
int main(){
    string str;
    cin>>str;
    int n=str.size();
    int x=n;
    int i=1;
    if(checkPali(0,str)){
        cout<<"pali"<<endl;
    }else{
        cout<<"not pali"<<endl;
    }
}