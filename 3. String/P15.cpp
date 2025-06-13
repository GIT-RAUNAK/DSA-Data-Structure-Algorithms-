/*Given an integer n, find its factorial. Return a list of integers denoting the digits that make up the factorial of n.*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> factorial(int n){
  vector<int> ans(1,1);
  while(n>1){
    int carry=0,result=0,size=ans.size();
    for(int i=0;i<size;i++){
      result=ans[i]*n+carry;
      carry=result/10;
      ans[i]=result%10;
    }
    while(carry!=0){
      ans.push_back(carry%10);
      carry=carry/10;
    }
    n--;
  }
  reverse(ans.begin(),ans.end());
  return ans;
}

int main(){
  int n;
  cout<<"Enter a number for which Factorial is to be found:\n";
  cin>>n;
  
  vector<int> result=factorial(n);

  for(int i=0;i<result.size();i++){
    cout<<result[i];
  }
  cout<<endl;
}