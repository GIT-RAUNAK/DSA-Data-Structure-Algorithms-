//Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

//You must not use any built-in exponent function or operator.

#include<iostream>
using namespace std;

int sqrt(int x){
  int start=0,end=x;
  while(start<=end){
    long long mid=start+(end-start)/2;
    long long square=mid*mid, square2=(mid+1)*(mid+1);
    if(square==x || (square<x && square2>x))
    return mid;
    else if(square<x)
    start=mid+1;
    else
    end=mid-1;
  }
  return 0;
}

int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;

  int result=sqrt(n);
  cout<<result<<endl;
}