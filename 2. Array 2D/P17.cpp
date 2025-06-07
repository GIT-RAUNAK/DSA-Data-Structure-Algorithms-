/*Given a square matrix mat[][] of size n x n. The task is to rotate it by 90 degrees in an anti-clockwise direction without using any extra space. */

#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix){
  int n=matrix.size();
  //Transpose
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      swap(matrix[i][j],matrix[j][i]);
    }
  }
  //Reverse
  for(int j=0;j<n;j++){
    int top=0,bottom=n-1;
    while(top<bottom){
      swap(matrix[top][j],matrix[bottom][j]);
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
  cout<<"Matrix after 180 degree rotation is:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
}