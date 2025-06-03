/*Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Your solution must use only constant extra space.*/

#include<iostream>
#include<vector>
using namespace std;

pair<int,int> twosum(vector<int>&arr,int target){
  int start=0,end=arr.size()-1;
  while(start<end){
    if(arr[start]+arr[end]==target)
    return {start+1,end+1};
    else if(arr[start]+arr[end]>target)
    end--;
    else
    start++;
  }
  return {-1,-1};
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
  cout<<"Enter target sum:\n";
  cin>>target;
  pair<int,int> result=twosum(arr,target);
  cout<<"{"<<result.first<<","<<result.second<<"}"<<endl;
  return 0;
}