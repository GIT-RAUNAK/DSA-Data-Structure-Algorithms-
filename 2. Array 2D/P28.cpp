/*Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int smallestpositivenumber(vector<int> arr){
  int n=arr.size();
  for(int i=0;i<n;i++){
    if(arr[i]<=0)
    arr[i]=n+1;
  }

  sort(arr.begin(),arr.end());
  int j=1;
  for(int i=0;i<n;i++){
    if(arr[i]==j){
      j++;
      while(i+1<n && arr[i]==arr[i+1])
      i++;
    }
    else
    break;
  }
  return j;
}

int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;

  vector<int> array(n);

  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>array[i];
  }

  int result=smallestpositivenumber(array);

  cout<<"Smallest positive missing element in the array is "<<result<<endl;
}