/*Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.*/

#include<iostream>
#include<algorithm>
using namespace std;

string addStrings(string num1,string num2){
  int n1=num1.size()-1,n2=num2.size()-1;
  int sum=0,carry=0;
  string ans;
  if(num1.size()>num2.size()){
    while(n2>=0){
      sum=(num1[n1]-'0')+(num2[n2]-'0')+carry;
      carry=sum/10;
      char c='0'+ sum %10;
      ans+=c;
      n1--;
      n2--;
    }
    while(n1>=0){
      sum=(num1[n1]-'0')+carry;
      carry=sum/10;
      char c='0'+ sum%10;
      ans+=c;
      n1--;
    }
  }
  else{
    while(n1>=0){
      sum=(num1[n1]-'0')+(num2[n2]-'0')+carry;
      carry=sum/10;
      char c='0'+ sum %10;
      ans+=c;
      n1--;
      n2--;
    }
    while(n2>=0){
      sum=(num2[n2]-'0')+carry;
      carry=sum/10;
      char c='0'+ sum%10;
      ans+=c;
      n2--;
    }
  }

  if(carry>0)
  ans+=carry+'0';

  reverse(ans.begin(),ans.end());

  return ans;
}

int main(){
  string num1,num2;
  cout<<"Provide two non negative integers as a string:\n";
  getline(cin,num1);
  getline(cin,num2);

  string result=addStrings(num1,num2);

  cout<<result<<endl;
}