//Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 
#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
  for(int i=n-1;i>0;i--){
    int index=0;
    for(int j=1;j<=i;j++){
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