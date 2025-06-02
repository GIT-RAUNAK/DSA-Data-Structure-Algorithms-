//Selection Sort Algorithm to sort the array of integers in decreasing order

#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int index=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]>arr[index])
      index=j;
    }
    swap(arr[i],arr[index]);
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
  selectionsort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}