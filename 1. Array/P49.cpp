/*Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.*/

#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int trappingrainwater(vector<int>arr){
  int index=0,max=INT_MIN;
  for(int i=0;i<arr.size();i++){
    if(arr[i]>max){
      max=arr[i];
      index=i;
    }
  }
  int leftmax=arr[0],leftwater=0;
  for(int i=1;i<index;i++){
    if(arr[i]<leftmax)
    leftwater+=(leftmax-arr[i]);
    else
    leftmax=arr[i];
  }
  int rightmax=arr[arr.size()-1],rightwater=0;
  for(int i=arr.size()-2;i>index;i--){
    if(arr[i]<rightmax)
    rightwater+=(rightmax-arr[i]);
    else
    rightmax=arr[i];
  }
  return leftwater+rightwater;
}

int main(){
  int n;
  cout<<"Enter the number of Buildings columns:\n";
  cin>>n;
  vector<int> arr(n);
  cout<<"Enter height of the buildings:\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int result=trappingrainwater(arr);
  cout<<"Total rain water trapped is "<<result<<endl;
  return 0;
}