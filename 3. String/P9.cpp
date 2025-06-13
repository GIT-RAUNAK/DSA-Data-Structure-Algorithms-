/*Given a 0-indexed string s, permute s to get a new string t such that:

All consonants remain in their original places. More formally, if there is an index i with 0 <= i < s.length such that s[i] is a consonant, then t[i] = s[i].
The vowels must be sorted in the nondecreasing order of their ASCII values. More formally, for pairs of indices i, j with 0 <= i < j < s.length such that s[i] and s[j] are vowels, then t[i] must not have a higher ASCII value than t[j].
Return the resulting string.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in lowercase or uppercase. Consonants comprise all letters that are not vowels.*/

#include<iostream>
using namespace std;

string sortVowels(string s) {
       int i=0;
       while(i<s.size()-1) {
        if(s[i]=='a'|| s[i]=='e' ||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            int index=i;
            for(int j=i+1;j<s.size();j++){
                if(s[index]>s[j] && (s[j]=='a'|| s[j]=='e' ||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'))
                index=j;
            }
            swap(s[i],s[index]);
            i++;
        }
        else
        i++;
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