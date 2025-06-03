/*Given an array arr consisting of only 0's and 1's in random order. Modify the array in-place to segregate 0s onto the left side and 1s onto the right side of the array.*/

#include<iostream>
#include<vector>
using namespace std;

void segregate0sand1s(vector<int>&arr){
  int start=0,end=arr.size()-1;
  while(start<end){
    if(arr[start]==0)
    start++;
    else if(arr[end]==1)
    end--;
    else{
      swap(arr[start],arr[end]);
      start++;
      end--;
    }
  }
}

int main(){
  int n;
  cout<<"Enter the number of elements in the array:\n";
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter elements in the array:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  segregate0sand1s(arr);
  cout<<"After Segregation:\n";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}