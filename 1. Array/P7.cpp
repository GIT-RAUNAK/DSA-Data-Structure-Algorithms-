//You are given an integer array arr[]. Your task is to find the smallest positive number missing from the array.

//Note: Positive number starts from 1. The array can have negative integers too.

#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int arr[1000];
  int n;
  cout<<"Enter the number of elements:\n";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cout<<"arr["<<i<<"]:";
    cin>>arr[i];
  }
  int ans=0;
  for(int i=1;i<INT_MAX;i++)
  {
    int index=0;
    for(int j=0;j<n;j++){
      if(arr[j]==i)
      index++;
    }
    if(index==0)
    {
      ans=i;
      break;
    }
  }
  cout<<ans<<endl;
}