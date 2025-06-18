#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(const char *str){
  int length=strlen(str);
  int start=0,end=length-1;
  while(start<end){
    if(str[start]!=str[end])
    return 0;
    start++;
    end--;
  }
  return 1;
  }

int main(){
  const char *palindrome1 = "level";
  const char *palindrome2 = "Hello";
  cout<<"Is "<<palindrome1<<" a palindrome? "<<(isPalindrome(palindrome1)?"Yes":"No")<<endl;
  cout<<"Is "<<palindrome2<<" a palindrome? "<<(isPalindrome(palindrome2)?"Yes":"No")<<endl;
  return 0;
}