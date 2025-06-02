//You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

//Return the index of the peak element.

//Your task is to solve it in O(log(n)) time complexity.

#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
  int start=1,end=arr.size()-2;
  while(start<=end){
  int mid=start+(end-start)/2;
  if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
  return arr[mid];
  else if(arr[mid]>arr[mid+1] && arr[mid]<arr[mid-1])
  end=mid-1;
  else
  start=mid+1;
  }
  return 0;
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
  int result=peakIndexInMountainArray(arr);
  cout<<"Peak Index in Mountain Array is "<<result<<endl;
  return 0;
}
