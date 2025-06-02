//Given a sorted array, arr[] and a number target, you need to find the number of occurrences of target in arr[].

#include<iostream>
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
  int target;
  cout<<"Enter Target Element:\n";
  cin>>target;
  int right=-1,left=-1;
    int start=0,end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            left=mid;
            end=mid-1;
        }
        else if(arr[mid]<target)
        start=mid+1;
        else
        end=mid-1;
    }
    start=0,end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
            right=mid;
            start=mid+1;
        }
        else if(arr[mid]<target)
        start=mid+1;
        else
        end=mid-1;
    }
    if(left==-1)
    {
        cout<<"0";
    }
    else
    {
        int ans=right-left+1;
        cout<<ans; 
    }
}