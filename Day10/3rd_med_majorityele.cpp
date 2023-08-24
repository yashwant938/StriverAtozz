#include<bits/stdc++.h>
int majorityOneByTwo(std::vector<int>&vec,int key){
int count=0;
for(int i=0;i<vec.size();i++){
    if(vec[i]==key){
        count++;
    }

}
if(count>=vec.size()/2){
    return 1;
}else{
    return 0;
}
}
int main(){
  #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    std::cin>>n;
    int x;
    std::vector<int>vec;
    for(int i=0;i<n;i++){
        std::cin>>x;
        vec.push_back(x);
    }
    int key;
    std::cin>>key;
    if(majorityOneByTwo(vec,key)){
        std::cout<<"yes majority is 1/2"<<std::endl;
    }else{
        std::cout<<"No majority element is not 1/2"<<std::endl;
    }


}