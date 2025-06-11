/*Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".*/

#include<iostream>
using namespace std;

string defanging(string address){
  string ans;
  for(int i=0;i<address.size();i++){
    if(address[i]=='.')
    ans+="[.]";
    else
    ans+=address[i];
  }
  return ans;
}

int main(){
  string s;
  cout<<"Provide an IP Address:\n";
  getline(cin,s);

  string result=defanging(s);

  cout<<"Defanging of IP Address is "<<result;
  cout<<endl;
}