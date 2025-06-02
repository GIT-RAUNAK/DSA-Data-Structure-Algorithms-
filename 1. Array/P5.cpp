//Find the third smallest element in an array of unique elements size n. Where n>3
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
  int min=arr[0],sec_min=arr[1],third_min=arr[2];
  for(int i=0;i<n;i++)
  {
    if(arr[i]<min)
    {
      third_min=sec_min;
      sec_min=min;
      min=arr[i];
    }
    else if(sec_min>arr[i] && arr[i]!=min)
    {
      third_min=sec_min;
      sec_min=arr[i];
    }
    else if(third_min>arr[i] && arr[i]!=min && arr[i]!=sec_min)
    {
      third_min=arr[i];
    }
  }
  cout<<"Third Smallest element is: "<<third_min<<endl;
}