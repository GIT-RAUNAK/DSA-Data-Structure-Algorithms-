/*Given an unsorted array arr of positive integers. One number a from the set [1, 2,....,n] is missing and one number b occurs twice in the array. Find numbers a and b.

Note: The test cases are generated such that there always exists one missing and one repeating number within the range [1,n].*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> missingandrepeat(vector<int> arr){
  sort(arr.begin(),arr.end());
  for(int i=0;i<arr.size();i++){
    arr[i]--;
  }
  for(int i=0;i<arr.size();i++){
    arr[arr[i]%arr.size()]+=arr.size();
  }
  int repeat=0,missing=0;
  for(int i=0;i<arr.size();i++){
    if(arr[i]/arr.size()==0){
      missing=i+1;
      break;
    }
  }
  for(int i=0;i<arr.size();i++){
    if(arr[i]/arr.size()==2){
      repeat=i+1;
      break;
    }
  }

  return {missing,repeat};
}

int main(){
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  
  vector<int>arr(n);

  cout<<"Enter elements in the array such that there always exists one missing and one repeating number within the range [1,n]\n";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  vector<int> result=missingandrepeat(arr);

  cout<<"Missing Element is "<<result[0]<<" and Repeating element is "<<result[1];
  cout<<endl;
}