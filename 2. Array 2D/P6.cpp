/*Write a program to find the transpose of a square matrix of size N*N. Transpose of a matrix is obtained by changing rows to columns and columns to rows.*/

#include<iostream>
#include<vector>
using namespace std;

void transposematrix(vector<vector<int>>& mat,int n){
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      swap(mat[i][j],mat[j][i]);
    }
  }
}

int main(){
  int n;
  cout<<"Enter the size of rows and columns for a square matrix: ";
  cin>>n;
  vector<vector<int>> mat(n,vector<int>(n));
  cout<<"Enter the values in the matrix:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>mat[i][j];
    }
  }
  transposematrix(mat,n);
  cout<<"Transpose of the matrix is: \n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
}