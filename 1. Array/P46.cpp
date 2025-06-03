/*Given an one-dimensional unsorted array A containing N integers.

You are also given an integer B, find if there exists a pair of elements in the array whose difference is B.

Return 1 if any such pair exists else return 0.*/

#include<iostream>
#include<vector>

using namespace std;
bool solve(int* arr, int n, int B) {
  int i,j;
  for(i=0;i<n;i++){
    int index=i;
    for(j=i+1;j<n;j++){
      if(arr[j]<arr[index]){
        index=j;
      }
    }
    int temp=arr[i];
    arr[i]=arr[index];
    arr[index]=temp;
  }
  int start=0,end=1;
  while(start<n && end<n){
    if(arr[end]-arr[start]==B)
    return 1;
    else if(arr[end]-arr[start]>B)
    start++;
    else
    end++;
    if(start==end)
    end++;
  }
  return 0;
}

int main(){
  int n,B;
  cout<<"Enter number of elements in the array: ";
  cin>>n;
  int arr[n];
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Enter Targeted sum: ";
  cin>>B;
  bool result=solve(arr,n,B);
  cout<<boolalpha<<result<<endl;
}