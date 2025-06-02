//Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

//If target is not found in the array, return [-1, -1].

//You must write an algorithm with O(log n) runtime complexity.

#include<iostream>
#include<vector>
using namespace std;

pair<int,int> searchrange(int arr[],int n,int target){
  int first=-1,last=-1;
  int start=0,end=n-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
        first=mid;
        end=mid-1;
    }
    else if(arr[mid]<target)
    start=mid+1;
    else
    end=mid-1;
  }
  start=0,end=n-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
      last=mid;
      start=mid+1;
    }
    else if(arr[mid]<target)
    start=mid+1;
    else
    end=mid-1;
  }

  return {first,last};
}

int main(){
  vector<int>index;
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  int arr[1000];
  cout<<"Enter characters in array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int target;
  cout<<"Enter target element:\n";
  cin>>target;

  pair<int,int> result=searchrange(arr,n,target);
  cout<<result.first<<" "<<result.second<<endl;
  return 0;
}