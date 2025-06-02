//Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

/*[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].*/

//Given the sorted rotated array nums of unique elements, return the minimum element of this array.

//You must write an algorithm that runs in O(log n) time.

#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int>& nums) {
  int start=0,end=nums.size()-1;
  while(start<end){
  int mid=start+(end-start)/2;
  if(nums[mid]>nums[end])
  start=mid+1;
  else
  end=mid;
  }
  return nums[end];
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
  int result=findMin(arr);
  cout<<"Minimum in Rotated sorted array is "<<result<<endl;
  return 0;
}