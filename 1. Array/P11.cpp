//Given an array arr[], find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

//Note:- The position you return should be according to 1-based indexing. 

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
  int ans=-1;
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
        ans=i+1;
        break;
      }
    }
    if(ans!=-1)
    break;
  }
  cout<<ans<<endl;
}