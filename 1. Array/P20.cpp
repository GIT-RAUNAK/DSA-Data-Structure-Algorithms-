//Insertion Sort Algorithm to sort the array of integers in increasing order if we start from the last element of the array. Question was explained in the class.
#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
  for(int i=n-2;i>=0;i--){
    int key=arr[i];
    int j=i+1;
    while(j<n && arr[j]<key){
      arr[j-1]=arr[j];
      j++;
    }
    arr[j-1]=key;
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