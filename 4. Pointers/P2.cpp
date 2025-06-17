/*Print the address of the first index of the char array in c++.*/

#include<iostream>
using namespace std;

int main(){
  char arr[5] = {'1','2','3','4','5'};
  char *ptr=arr;

  cout<<static_cast<void*>(ptr)<<endl;
  cout<<static_cast<void*>(arr)<<endl;
  cout<<static_cast<void*>(&arr[0])<<endl;
}
