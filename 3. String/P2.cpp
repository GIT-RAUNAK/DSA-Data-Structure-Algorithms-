/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.*/

#include<iostream>
#include<vector>

using namespace std;

bool palindrome(string s){
  int start=0,end=s.size()-1;
  while(start<end){
    while((start<end) && !((s[start]>='A' && s[start]<='Z') || (s[start]>='a' && s[start]<='z') || (s[start]>='0' && s[start]<'9')))  {start++;}
    while((start<end) && !((s[end]>='A' && s[end]<='Z') || (s[end]>='a' && s[end]<='z') || (s[end]>='0' && s[end]<='9')))  {end--;}

    char leftchar=s[start];
    char rightchar=s[end];

    if(leftchar>='A' && leftchar<='Z')  leftchar+=32;
    if(rightchar>='A' && rightchar<='Z')  rightchar+=32;

    if(leftchar!=rightchar)
    return false;

    start++;
    end--;
  }
  return true;
}

int main(){
  string s;
  cout<<"Enter a word: ";
  getline(cin,s);

  bool result=palindrome(s);

  cout<<boolalpha<<result<<endl;
}