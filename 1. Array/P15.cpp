//Selection Sort Algorithm to sort the array of char in ascending order.
#include<iostream>
using namespace std;

void selectionsort(char arr[],int n){
  for(int i=0;i<n-1;i++){
    int index=i;
    for(int j=i+1;j<n;j++){
      if(arr[index]>arr[j])
      index=j;
    }
    swap(arr[i],arr[index]);
  }
}

int main(){
  int n;
  cout<<"Enter the size of array: ";
  cin>>n;
  char arr[1000];
  cout<<"Enter characters in array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  selectionsort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}