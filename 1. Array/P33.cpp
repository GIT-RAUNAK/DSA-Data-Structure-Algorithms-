/*A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.*/

#include<iostream>
#include<vector>
using namespace std;

int findpeakindex(vector<int> arr){
  if(arr.size()==1) return 0;
  if(arr.size()==2) return arr[0]>arr[1]?0:1;
  int start=0,end=arr.size()-1;
  while(start<end){
    int mid=start+(end-start)/2;
    if(arr[mid]>arr[mid+1])
    end=mid;
    else
    start=mid+1;
  }
  return start;
}

int main(){
  int n;
  cout<<"Enter the number of elements in the array:\n";
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  
  int result=findpeakindex(arr);
  cout<<"Peak element's index is "<<result<<endl;
  return 0;
}