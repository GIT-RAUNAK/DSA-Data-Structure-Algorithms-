//Given an array arr of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

#include<iostream>
using namespace std;

int countZeroes(int arr[],int n){
  int start=0,end=n-1,countof1=n;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==0){
      countof1=mid;
      end=mid-1;
    }
    else
    start=mid+1;
  }
  return n-countof1;
}

int main(){
  int n;
  cout<<"Enter size of array:\n";
  cin>>n;
  int arr[1000];
  cout<<"Enter only 0's and 1's as elements in the array as 1 comes first:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int result=countZeroes(arr,n);
  cout<<"Number of Zeroes are "<<result<<endl;
  return 0;
}