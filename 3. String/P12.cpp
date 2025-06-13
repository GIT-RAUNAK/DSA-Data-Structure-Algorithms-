/*Given a string str consisting of only uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the ith place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa.*/

#include<iostream>
#include<vector>
using namespace std;

string caseSort(string s){
  int n=s.size();
  
  vector<int> lower(26,0);
  vector<int> upper(26,0);

  for(int i=0;i<n;i++){
    if(s[i]>=65 && s[i]<=90){
      upper[s[i]-'A']++;
      s[i]='#';
    }
    else if(s[i]>=97 && s[i]<=122){
      lower[s[i]-'a']++;
      s[i]='*';
    }
  }

  string ans;

  for(int i=0;i<26;i++){
    char c='A'+i;
    while(upper[i]!=0){
      ans+=c;
      upper[i]--;
    }
  }

  for(int i=0;i<26;i++){
    char c='a'+i;
    while(lower[i]!=0){
      ans+=c;
      lower[i]--;
    }
  }

  int second=0;

  for(int i=0;i<n;i++){
    if(s[i]=='#')
    {
      s[i]=ans[second];
      second++;
    }
  }

  for(int i=0;i<n;i++){
    if(s[i]=='*')
    {
      s[i]=ans[second];
      second++;
    }
  }

  return s;
}

int main(){
  string s;
  cout<<"provide a word which is a mixture of lower as well as upper case letter:\n";
  getline(cin,s);

  string ans=caseSort(s);

  cout<<ans<<endl;
}