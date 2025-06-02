/*Given a positive integer num, return true if num is a perfect square or false otherwise.

A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.

You must not use any built-in library function, such as sqrt.*/

#include<iostream>
using namespace std;

bool isperfectsquare(int num){
  int start=0,end=num;
  while(start<=end){
    long long mid=start+(end-start)/2;
    long long square=mid*mid;
    if(square==num)
    return 1;
    else if(square<num)
    start=mid+1;
    else
    end=mid-1;
  }
  return 0;
}

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  
  bool result=isperfectsquare(n);
  cout<<boolalpha<<result<<endl;
  return 0;
}