//Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

//You must write an algorithm with O(log n) runtime complexity.

#include<iostream>
using namespace std;

int searchindex(int arr[],int n,int target){
  int index=0;
  int start=0,end=n-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    index=mid;
    if(arr[mid]==target)
    return mid;
    else if(arr[mid]>target)
    end=mid-1;
    else
    start=mid+1;
  }
  if(arr[index]>target)
  return index;
  else
  return index+1;
}

  int main(){
  int n;
  cout<<"Enter the size of array:\n";
  cin>>n;
  int arr[1000];
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  int target;
  cout<<"Enter targeted element:\n";
  cin>>target;
  int result=searchindex(arr,n,target);
  cout<<result<<endl;
  return 0;
}