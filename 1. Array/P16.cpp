//Use Bubble Sort Algorithm to sort the array of integers in decreasing order.
#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
  for(int i=n-1;i>=0;i--){
    int count=0;
    for(int j=0;j<i;j++){
      if(arr[j]<arr[j+1]){
        swap(arr[j],arr[j+1]);
        count++;
      }
    }
    if(count==0)
    break;
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
  bubblesort(arr,n);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;
}