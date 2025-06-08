/*You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.*/

#include<iostream>
#include<vector>
using namespace std;

bool search(vector<vector<int>> matrix,int target){
  
  for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[0].size();j++){
      if(matrix[i][j]==target)
      return 1;
    }
  }

  return 0;
}

int main(){
  int n,m;
  cout<<"Enter number of rows and columns in the matrix respectively:\n";
  cin>>n>>m;

  vector<vector<int>> matrix(n,vector<int>(m));
  cout<<"Enter elements in the matrix:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>matrix[i][j];
    }
  }

  int target;
  cout<<"Enter targeted element:\n";
  cin>>target;

  bool result=search(matrix,target);

  cout<<boolalpha<<result<<endl;
}