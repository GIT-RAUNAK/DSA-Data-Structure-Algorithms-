/*There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

You must decrease the overall operation steps as much as possible.*/

#include<iostream>
#include<vector>
using namespace std;

bool search(vector<int> arr,int target){
  int start=0,end=arr.size()-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
    return 1;
    if(arr[mid]==arr[start] && arr[mid]==arr[end]){
      start++;
      end--;
    }
    else if(arr[mid]>=arr[start]){
      if(arr[start]<=target && arr[mid]>target)
      end=mid-1;
      else
      start=mid+1;
    }
    else{
      if(arr[end]>=target && arr[mid]<target)
      start=mid+1;
      else
      end=mid-1;
    }
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
  int target;
  cout<<"Enter targeted element: ";
  cin>>target;
  bool result=search(arr,target);
  cout<<boolalpha<<result<<endl;
  return 0;
}