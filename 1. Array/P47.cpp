/*Given an array, arr[] of distinct elements, and a number x, find if there is a pair in arr[] with a product equal to x. Return true if there exists such pair otherwise false.*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool product(vector<int> arr,long long target){
  sort(arr.begin(),arr.end());
  int zerocount=count(arr.begin(),arr.end(),0);
  if(zerocount>1 && target==0) return true;
  int start=0,end=arr.size()-1;
  while(start<end){
    if(arr[start]*arr[end]==target)
    return 1;
    else if(arr[start]*arr[end]>target)
    end--;
    else
    start++;
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
  cout<<"Enter Targeted element:\n";
  cin>>target;
  bool result=product(arr,target);
  cout<<boolalpha<<result<<endl;
}