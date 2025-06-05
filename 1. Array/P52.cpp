/*Given an array A and a value B, remove all the instances of that value in the array.
Also, return the number of elements left in the array after the operation. It does not matter what is left beyond the expected length.
Try to do it in less than linear additional space complexity.*/

#include<iostream>
using namespace std;

int removeduplicates(int arr[],int n,int n2){
  int j=0;
  for(int i=0;i<n;i++){
    if(arr[i]!=n2)
    {
      arr[j]=arr[i];
      j++;
    }
  }
  return j;
}

int main(){
  int n,n2;
  cout<<"Enter number of elements:\n";
  cin>>n;
  int arr[1000];
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Enter elements want to remove:\n";
  cin>>n2;

  int result=removeduplicates(arr,n,n2);
  cout<<"Length of the array after removing duplicate elements is: "<<result<<endl;
}