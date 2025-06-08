/*Given an unsorted array arr of positive integers. One number a from the set [1, 2,....,n] is missing and one number b occurs twice in the array. Find numbers a and b.

Note: The test cases are generated such that there always exists one missing and one repeating number within the range [1,n].*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> missingandrepeating(vector<int> array){
  sort(array.begin(),array.end());
  int missing=0;
  int repeating=0;
  vector<int> result;
  for(int j=1;j<=array.size();j++){
    int count=0;
    for(int i=0;i<array.size();i++){
      if(array[i]==j)
      count++;
    }
    if(count==0)
    missing=j;
    if(count==2)
    repeating=j;
  }
  result.push_back(missing);
  result.push_back(repeating);
  return result;
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