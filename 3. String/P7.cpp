/*Given a string consisting of lowercase letters, arrange all its letters in ascending order. */

#include<iostream>
#include<vector>
using namespace std;

string sorting(string s){
  vector<int> count(26,0);
  for(int i=0;i<s.size();i++){
    count[s[i]-'a']++;
  }
  string ans;
  for(int i=0;i<26;i++){
    char c='a'+i;
    while(count[i]){
      ans+=c;
      count[i]--;
    }
  }
  return ans;
}

int main(){
  string s;
  cout<<"State a sentence:\n";
  getline(cin,s);

  string result=sorting(s);

  for(int i=0;i<result.size();i++){
    cout<<result[i];
  }
  cout<<endl;
}