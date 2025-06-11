/*Given a string consisting of lowercase letters, arrange all its letters in ascending order. */

#include<iostream>
using namespace std;

void sort(string& s){
  for(int i=0;i<s.size()-1;i++){
    int index=i;
    for(int j=i+1;j<s.size();j++){
      if(s[index]>s[j])
      index=j;
    }
    swap(s[i],s[index]);
  }
}

int main(){
  string s;
  cout<<"State a sentence:\n";
  getline(cin,s);

  sort(s);

  for(int i=0;i<s.size();i++){
    cout<<s[i];
  }
  cout<<endl;
}