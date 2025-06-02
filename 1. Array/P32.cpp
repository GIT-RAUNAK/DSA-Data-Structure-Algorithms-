/*Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Return the kth positive integer that is missing from this array.*/

#include<iostream>
#include<vector>
using namespace std;

int findKthelement(vector<int> arr,int k){
  int current=1;
  int i=0;
  while(k>0){
    if(i<arr.size() && arr[i]==current)
    i++;
    else
    k--;
    if(k>0)
    current++;
  }
  return current;
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
  int k;
  cout<<"Enter position: ";
  cin>>k;
  int result=findKthelement(arr,k);
  cout<<"Kth Positioned element in sorted array is "<<result<<endl;
  return 0;
}