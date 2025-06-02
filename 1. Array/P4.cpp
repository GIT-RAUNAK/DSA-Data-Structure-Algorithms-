//Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.
#include<iostream>
using namespace std;
int main()
{
  char alpha[26];
  for(int i=0;i<26;i++)
  {
    alpha[i]='a'+i;
  }

  for(int i=0;i<26;i++){
    cout<<alpha[i]<<" ";
  }
  cout<<endl;
}