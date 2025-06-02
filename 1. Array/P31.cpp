/*There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.*/

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> arr,int target){
  int start=0,end=arr.size()-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
    return mid;
    else if(arr[start]<=arr[mid]){
      if(target>=arr[start] && target<arr[mid])
      end=mid-1;
      else
      start=mid+1;
    }
    else{
      if(target>arr[mid] && target<=arr[end])
      start=mid+1;
      else
      end=mid-1;
    }
  }
  return -1;
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
  int target;
  cout<<"Enter targeted element: ";
  cin>>target;
  int result=search(arr,target);
  cout<<"Index of targeted element in Rotated sorted array is "<<result<<endl;
  return 0;
}