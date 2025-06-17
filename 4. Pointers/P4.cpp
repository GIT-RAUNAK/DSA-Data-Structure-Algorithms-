/*Print the address of String in c++.*/

#include<iostream>
using namespace std;

int main(){
  string s="Hello!";
  string *ptr=&s;

  cout<<ptr<<endl;
}