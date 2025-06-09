/*Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int majorityelement(vector<int> arr){
  int n=arr.size();
  sort(arr.begin(),arr.end());
  int max=0,candidate=arr[0],count=0;
  for(int i=0;i<n;i++){
    if(arr[i]==arr[i+1]){
      count++;
      if(count>max){
        max=count;
        candidate=arr[i];
      }
    }
    else
    count=0;
  }
  return candidate;
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

  int result=majorityelement(array);

  cout<<"Majority element in the array is "<<result<<endl;
}