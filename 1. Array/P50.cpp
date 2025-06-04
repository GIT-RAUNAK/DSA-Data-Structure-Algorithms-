/*Given an array arr[] and an integer target, determine if there exists a triplet in the array whose sum equals the given target.

Return true if such a triplet exists, otherwise, return false.*/

#include<iostream>
#include<vector>
using namespace std;

bool triplesum(vector<int>arr,int target){
  for(int i=0;i<arr.size()-1;i++){
    int index=i;
    for(int j=i+1;j<arr.size();j++){
      if(arr[j]<arr[index])
      index=j;
    }
    swap(arr[i],arr[index]);
  }
  for(int i=0;i<arr.size();i++){
    int start=0,end=arr.size()-1;
    while(start<end){
      if(arr[i]+arr[start]+arr[end]==target)
      return 1;
      else if(arr[i]+arr[start]+arr[end]>target)
      end--;
      else
      start++;
    }
  }
  return 0;
}

int main(){
  int n;
  cout<<"Enter the number elements in the array: ";
  cin>>n;
  vector<int>arr(n);
  cout<<"Enter height of the buildings:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int target;
  cout<<"Enter targeted sum:\n";
  cin>>target;
  bool result=triplesum(arr,target);
  cout<<boolalpha<<result<<endl;
  return 0;
}