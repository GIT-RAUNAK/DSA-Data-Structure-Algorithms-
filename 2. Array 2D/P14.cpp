/*You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).*/

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> matrix){
  int n=matrix.size();
  vector<vector<int>> ans(n,vector<int>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      ans[j][n-1-i]=matrix[i][j];
    }
  }
  return ans;
}

int main(){
  int n;
  cout<<"Enter the size of square matrix: ";
  cin>>n;
  vector<vector<int>> matrix(n,vector<int>(n));
  cout<<"Enter the elements in the matrix:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>matrix[i][j];
    }
  }
  vector<vector<int>> result=rotate(matrix);
  cout<<"Matrix after 90 degree rotation is:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }
}
