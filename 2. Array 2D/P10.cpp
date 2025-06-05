/*Give a N * N square matrix A, return all the elements of its anti-diagonals from top to bottom.*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> downwarddiagonal(int n,vector<vector<int>> mat){
  vector<int> result;
  for(int k=0;k<=2*(n-1);k++){
    for(int i=0;i<n;i++){
      int j=k-i;
      if(j>=0 && j<n)
      result.push_back(mat[i][j]);
    }
  }
  return result;
}

int main(){
  int n;
  cout<<"Enter Rows=Columns in the square matrix: ";
  cin>>n;
  vector<vector<int>> mat(n,vector<int>(n));
  cout<<"Enter the elements in the matrix:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>mat[i][j];
    }
  }
  vector<int> result=downwarddiagonal(n,mat);
  cout<<"Diagonal elements are:\n";
  for(int i=0;i<n*n;i++){
    cout<<result[i]<<" ";
  }
}