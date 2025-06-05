/*Given an array A of N integers. You have to find whether a combination of four elements in the array whose sum is equal to a given value X exists or not.*/

#include<iostream>
using namespace std;

bool foursum(int arr[],int n,int target){
  for(int i=0;i<n-1;i++){
    int index=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[index])
      index=j;
    }
    swap(arr[i],arr[index]);
  }
  for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
      int start=j+1,end=n-1;
      while(start<end){
        if(arr[i]+arr[j]+arr[start]+arr[end]==target)
        return 1;
        else if(arr[i]+arr[j]+arr[start]+arr[end]>target)
        end--;
        else
        start++;
      }
    }
  }
  return 0;
}

int main(){
  int n;
  cout<<"Enter the number of elements in the array: ";
  cin>>n;
  int arr[1000];
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int target;
  cout<<"Enter target sum: ";
  cin>>target;

  bool result=foursum(arr,n,target);

  cout<<boolalpha<<result<<endl;
}