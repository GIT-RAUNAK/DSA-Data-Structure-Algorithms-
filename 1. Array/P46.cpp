/*Given an one-dimensional unsorted array A containing N integers.

You are also given an integer B, find if there exists a pair of elements in the array whose difference is B.

Return 1 if any such pair exists else return 0.*/

#include<iostream>
#include<math.h>
using namespace std;

int diff(int* arr,int n,int target){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]-arr[j]==target || arr[j]-arr[i]==target)
      return 1;
    }
  }
  return 0;
}

int main(){
  int n;
  cout<<"Enter the number of elements in the array:\n";
  cin>>n;
  int arr[1000];
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int target;
  cout<<"Enter Targeted element:\n";
  cin>>target;
  int result=diff(arr,n,target);
  cout<<result<<endl;
}