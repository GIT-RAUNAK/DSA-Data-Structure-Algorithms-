/*You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.*/

#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix){
  int n=matrix.size();
  //transpose of the matrix
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      swap(matrix[i][j],matrix[j][i]);
    }
  }
  //reverse the matrix
  for(int j=0;j<n;j++){
    int top=0,bottom=n-1;
    while(top<bottom){
      swap(matrix[j][top],matrix[j][bottom]);
      top++;
      bottom--;
    }
  }
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
  rotate(matrix);
  cout<<"Matrix after 90 degree rotation is:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
}
