#include<bits/stdc++.h>
void dPlaceShift(std::vector<int>&vec,int d){
    std::vector<int>temp;
    for(int i=0;i<d;i++){
        // temp[i]=vec[i];
        temp.push_back(vec[i]);
    }
    int index=0;
    for(int i=vec.size()-d;i<vec.size();i++){
        vec[index]=vec[i];
        index++;
    }
    for(int i=0;i<temp.size();i++){
        vec[index]=temp[i];
        index++;
    }
}
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
    int d;
    std::cin>>d;
    dPlaceShift(vec,d);

    for(int i=0;i<vec.size();i++){
        std::cout<<vec[i]<<std::endl;
    }

    


}