//Given a number n, find the cube root of n.

//Note: We need to print the floor value of the result.

#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter a positive number:\n";
  cin>>n;
  int start=0,end=n,ans=0;
  while(start<=end)
  {
    int mid=start+(end-start)/2;
    if(mid*mid*mid==n)
    {
      ans=mid;
      break;
    }
    else if(mid*mid*mid<n)
    {
      ans=mid;
      start=mid+1;
    }
    else
    {
      end=mid-1;
    }
  }
  cout<<ans;
}