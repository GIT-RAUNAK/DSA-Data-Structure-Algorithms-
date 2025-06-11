/*A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.*/

#include<iostream>
using namespace std;

bool pangram(string sentence){

  for(char alpha='a';alpha<='z';alpha++){
    int count=0;
    for(int i=0;i<sentence.size();i++){
      if(sentence[i]==alpha)
      count++;
    }
    if(count==0){
      return 0;
      break;
    }
  }
  return 1;
}

int main(){
  string s;
  cout<<"State a sentence:\n";
  getline(cin,s);

  bool result=pangram(s);

  cout<<boolalpha<<result<<endl;
}