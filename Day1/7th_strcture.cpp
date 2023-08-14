#include<iostream>
using namespace std;
struct node
{
  char name[50];
  int  age;
  int birth;
};

int main(){
struct node yash={"yashwant",23,2000};
cout<<yash.name;
cin>>yash.age;
cout<<yash.age;
}