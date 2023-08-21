#include<bits/stdc++.h>
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
int n;
std::cin>>n;
std::vector<int>vec;
int x;
for(int i=0;i<n;i++){
    std::cin>>x;
    vec.push_back(x);
}
int key;
std::cout<<"print key"<<std::endl;
std::cin>>key;
for(auto it: vec){
    if(it==key){
        std::cout<<"Yes"<<std::endl;
        return 0;
    }
}
std::cout<<"NO"<<std::endl;

}


