/*Given a 0-indexed string s, permute s to get a new string t such that:

All consonants remain in their original places. More formally, if there is an index i with 0 <= i < s.length such that s[i] is a consonant, then t[i] = s[i].
The vowels must be sorted in the nondecreasing order of their ASCII values. More formally, for pairs of indices i, j with 0 <= i < j < s.length such that s[i] and s[j] are vowels, then t[i] must not have a higher ASCII value than t[j].
Return the resulting string.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in lowercase or uppercase. Consonants comprise all letters that are not vowels.*/

#include<iostream>
#include<vector>
using namespace std;

string sortVowels(string s){
  vector<int> lower(26,0);
  vector<int> upper(26,0);

  for(int i=0;i<s.size();i++){
    if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
      lower[s[i]-'a']++;
      s[i]='#';
    }
    else if(s[i]=='A'|| s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
      upper[s[i]-'A']++;
      s[i]='#';
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
  for(int first=0;first<s.size();first++){
    if(s[first]=='#')
    {
      s[first]=ans[second];
      second++;
    }
  }

  return s;
}

int main(){
  string s;
  cout<<"Enter a word:\n";
  getline(cin,s);

  s=sortVowels(s);

  cout<<s<<endl;
}