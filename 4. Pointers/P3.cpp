/*Print the address of the char variable in c++.*/

#include<iostream>
using namespace std;

int main(){
  char arr[5]={'1','2','3','4','5'};
  char *ptr=arr;

  for(int i=0;i<5;i++){
    cout<<static_cast<void*>(ptr+i)<<endl;
  }
}