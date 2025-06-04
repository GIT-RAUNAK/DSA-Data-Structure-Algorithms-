/*Given a sorted array A consisting of duplicate elements.

Your task is to remove all the duplicates and return the length of the sorted array of distinct elements consisting of all distinct elements present in A.

Note: You need to update the elements of array A by removing all the duplicates*/

#include<iostream>
using namespace std;

int removeduplicates(int* arr,int n){
  if(n==0) return 0;
  int index=1;
  for(int i=1;i<n;i++){
    if(arr[i]!=arr[index-1]){
      arr[index]=arr[i];
      index++;
    }
  }
  return index;
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
  int result=removeduplicates(arr,n);
  cout<<result<<endl;
  return 0;
}