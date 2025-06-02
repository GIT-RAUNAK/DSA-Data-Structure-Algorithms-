//Use Insertion Sort Algorithm to sort the array of integers in decreasing order.
#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
  for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]<key){
      arr[j+1]=arr[j];
      j--;
    }
    arr[j+1]=key;
  }
}

int main(){
  int n;
  cout<<"Enter the size of array:\n";
  cin>>n;
  int arr[1000];
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  insertionsort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}