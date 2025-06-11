/*Given two strings s1 and s2. Return true if the string s2 can be obtained by rotating (in any direction) string s1 by exactly 2 places, otherwise, false.

Note: Both rotations should be performed in same direction chosen initially.*/

#include<iostream>
using namespace std;

string rotateclockwise(string s1){
  char a=s1[s1.size()-1];
  for(int i=s1.size();i>0;i--){
    s1[i]=s1[i-1];
  }
  s1[0]=a;

  return s1;
}

string rotateanticlockwise(string s1){
  char a=s1[0];
  for(int i=0;i<s1.size()-1;i++){
    s1[i]=s1[i+1];
  }
  s1[s1.size()-1]=a;

  return s1;
}

int main(){
  string s1,s2;
  cout<<"Enter 1st string:\n";
  getline(cin,s1);
  cout<<"Enter 2nd string:\n";
  getline(cin,s2);

  string result;
  int count=0;
  result=rotateclockwise(s1);
  result=rotateclockwise(result);
  if(result==s2)
  count++;

  result=rotateanticlockwise(s1);
  result=rotateanticlockwise(result);
  if(result==s2)
  count++;

  if(count!=0) cout<<"True"<<endl;
  else cout<<"False"<<endl;

}