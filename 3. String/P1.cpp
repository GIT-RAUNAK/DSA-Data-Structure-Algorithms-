/*Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.*/

#include<iostream>
#include<vector>
using namespace std;

void reversestring(vector<char>& s){
  int start=0,end=s.size()-1;
  while(start<end){
    swap(s[start],s[end]);
    start++;
    end--;
  }
}

int main(){
  string s;
  cout<<"Enter a word:";
  getline(cin,s);

  vector<char> string(s.begin(),s.end());

  reversestring(string);

  for(int i=0;i<string.size();i++){
    cout<<string[i];
  }
}