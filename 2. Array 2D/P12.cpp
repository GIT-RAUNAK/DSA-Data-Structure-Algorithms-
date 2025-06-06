/*Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern depicted below.*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> snakepattern(vector<vector<int>> matrix){
  int n=matrix.size();
  vector<int> result;
  int top=0,left=0,right=n-1;
  while(top<n){
    for(int i=left;i<=right;i++){
      result.push_back(matrix[top][i]);
    }
    top++;
  if(top<n){
    for(int j=right;j>=left;j--){
      result.push_back(matrix[top][j]);
    }
    top++;
  }
  }
  return result;
}

int main(){
  int n;
  cout<<"Enter the size of the square matrix: ";
  cin>>n;
  vector<vector<int>> matrix(n,vector<int>(n));
  cout<<"Enter the elements in the array:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>matrix[i][j];
    }
  }
  vector<int> result=snakepattern(matrix);
  cout<<"Snake Pattern of above matrix is:\n";
  for(int i=0;i<n*n;i++){
    cout<<result[i]<<" ";
  }
  cout<<endl;
}