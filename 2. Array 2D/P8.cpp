/*Given an m x n matrix, return all elements of the matrix in spiral order.*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralmatrix(vector<vector<int>> mat){
  int m=mat.size();
  int n=mat[0].size();
  vector<int> result;
  int top=0,bottom=m-1;
  int left=0,right=n-1;
  while(top<=bottom && left<=right){
    for(int i=left;i<=right;i++){
      result.push_back(mat[top][i]);
    }
    top++;
    for(int i=top;i<=bottom;i++){
      result.push_back(mat[i][right]);
    }
    right--;
  if(top<=bottom){
    for(int i=right;i>=left;i--){
      result.push_back(mat[bottom][i]);
    }
    bottom--;
    }
  if(left<=right){
    for(int i=bottom;i>=top;i--){
      result.push_back(mat[i][left]);
    }
    left++;
  }
  }
  return result;
}

int main(){
  int m,n;
  cout<<"Enter the length of Row and Column: ";
  cin>>m>>n;
  vector<vector<int>> mat(m,vector<int>(n));
  cout<<"Enter the elements in the array:\n";
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      cin>>mat[i][j];
    }
  }
  vector<int> result=spiralmatrix(mat);
  cout<<"Elements after performing spiral method:\n";
  for(int i=0;i<m*n;i++){
    cout<<result[i]<<" ";
  }
}