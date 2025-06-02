//An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1

#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int target){
  int start=0,end=n-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
    return mid;
    else if(arr[mid]<target)
    start=mid+1;
    else
    end=mid-1;
  }
  return -1;
}

int main(){
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int arr[1000];
  cout<<"Enter sorted elements in array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int target;
  cout<<"Enter target element:\n";
  cin>>target;

  int result=binarysearch(arr,n,target);

  if(result!=-1)
  cout<<"Element is found at "<<result<<endl;
  else
  cout<<"Element not found."<<endl;

  return 0;
}