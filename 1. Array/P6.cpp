//Find the second largest element in an array of unique elements of size n. Where n>3
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
  int sec_max,max;
  if(arr[0]>arr[1]){
    sec_max=arr[1];
    max=arr[0];
  }
  else{
    max=arr[1];
    sec_max=arr[0];
  }
  for(int i=2;i<n;i++)
  {
    if(arr[i]>max){
      sec_max=max;
      max=arr[i];
    }
    else if(arr[i]>sec_max && arr[i]!=max)
    {
      sec_max=arr[i];
    }
  }
  cout<<sec_max;
}