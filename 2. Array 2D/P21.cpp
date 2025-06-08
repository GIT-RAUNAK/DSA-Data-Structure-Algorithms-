/*Given a N X N binary Square Matrix where each row and column of the matrix is sorted in ascending order. Find the total number of zeros present in the matrix.*/

#include<iostream>
#include<vector>
using namespace std;

int countZEROES(vector<vector<int>> matrix){
  int count=0;
  int row=0,col=matrix[0].size()-1;
  while(row<matrix.size() && col>=0){
    if(matrix[row][col]==0)
    {
      count+=col+1;
      row++;
    }
    else
    col--;
  }
  return count;
}

int main(){
  int n;
  cout<<"Enter number of rows and columns in the sqaure matrix:\n";
  cin>>n;

  vector<vector<int>> matrix(n,vector<int>(n));
  cout<<"Enter elements in the matrix:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>matrix[i][j];
    }
  }

  int result=countZEROES(matrix);

  cout<<"Number of Zeroes in the matrix is "<<result<<endl;
}