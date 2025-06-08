/*Given an unsorted array arr of positive integers. One number a from the set [1, 2,....,n] is missing and one number b occurs twice in the array. Find numbers a and b.

Note: The test cases are generated such that there always exists one missing and one repeating number within the range [1,n].*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> missingandrepeating(vector<int> array){
  sort(array.begin(),array.end());
  vector<int> count(array.size(),0);
  for(int i=0;i<array.size();i++){
    count[array[i]-1]+=1;
  }
  int repeat=0,missing=0;
  for(int i=0;i<count.size();i++){
    if(count[i]==2){
    repeat=i+1;
    break;
    }
  }
  for(int i=0;i<count.size();i++){
    if(count[i]==0){
    missing=i+1;
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

  vector<int> result=missingandrepeating(arr);

  cout<<"Missing Element is "<<result[0]<<" and Repeating element is "<<result[1];
  cout<<endl;
}