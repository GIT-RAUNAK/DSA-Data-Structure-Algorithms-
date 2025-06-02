//Given a sorted array, arr[] and a number target, you need to find the number of occurrences of target in arr[]. 

#include<iostream>
using namespace std;

int occurence(int arr[],int n,int target){
  int first=-1,last=-1;
  int start=0,end=n-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
      first=mid;
      end=mid-1;
    }
    else if(arr[mid]>target)
    end=mid-1;
    else
    start=mid+1;
  }
  start=0,end=n-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
      last=mid;
      start=mid+1;
    }
    else if(arr[mid]>target)
    end=mid-1;
    else
    start=mid+1;
  }
  if(first==-1)
  return 0;
  else
  return last-first+1;
}

int main(){
  int n;
  cout<<"Enter size of array:\n";
  cin>>n;
  int arr[1000];
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int k;
  cout<<"Enter target element:\n";
  cin>>k;

  int result=occurence(arr,n,k);
  cout<<result<<endl;
  return 0;
}