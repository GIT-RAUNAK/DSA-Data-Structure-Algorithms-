//Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

//Return the kth positive integer that is missing from this array.

#include<iostream>
using namespace std;

int findKthelement(int arr[],int n,int k){
  int current=1;
  int i=0;
  while(k>0){
    if(i<n && arr[i]==current)
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
  cout<<"Enter size of array:\n";
  cin>>n;
  int arr[1000];
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int k;
  cout<<"Enter Kth Position:\n";
  cin>>k;

  int result=findKthelement(arr,n,k);
  cout<<result<<endl;
  return 0;
}