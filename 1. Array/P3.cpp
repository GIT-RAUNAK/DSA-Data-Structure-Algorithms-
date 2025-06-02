//Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.
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
  int ele;
  cout<<"Enter a specific element: ";
  cin>>ele;
  int index=-1;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==ele){
      index=i;
      break;
    }
  }
  cout<<"Index of "<<ele<<" is: "<<index;
}