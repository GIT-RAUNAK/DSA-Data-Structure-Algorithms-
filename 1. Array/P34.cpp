/*ou are given an array nums of non-negative integers. nums is considered special if there exists a number x such that there are exactly x numbers in nums that are greater than or equal to x.

Notice that x does not have to be an element in nums.

Return x if the array is special, otherwise, return -1. It can be proven that if nums is special, the value for x is unique.*/

#include<iostream>
#include<vector>
using namespace std;

int specialarray(vector<int>arr){
  for(int i=0;i<=arr.size();i++){
    int count=0;
    for(int j=0;j<arr.size();j++){
      if(arr[j]>=i)
      count++;
    }
    if(count==i){
    return i;
    break;
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
  
  int result=specialarray(arr);
  cout<<"There are "<<result<<" values that are greater than or equal to "<<result<<endl;
  return 0;
}