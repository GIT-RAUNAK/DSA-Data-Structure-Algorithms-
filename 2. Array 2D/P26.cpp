/*You are given an array arr[] containing positive integers. The elements in the array arr[] range from 1 to n (where n is the size of the array), and some numbers may be repeated or absent. Your task is to count the frequency of all numbers in the range 1 to n and return an array of size n such that result[i] represents the frequency of the number i (1-based indexing).*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> frequencyCount(vector<int> arr){
  sort(arr.begin(),arr.end());
  for(int i=0;i<arr.size();i++){
    arr[i]--;
  }
  for(int i=0;i<arr.size();i++){
    arr[arr[i]%arr.size()]+=arr.size();
  }
  for(int i=0;i<arr.size();i++){
    arr[i]=arr[i]/arr.size();
  }

  return arr;
}

int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  
  vector<int>arr(n);

  cout<<"Enter elements in the array such that some numbers may be repeated or absent ranging from [1,n]:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  vector<int> result=frequencyCount(arr);

  for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
  }
}