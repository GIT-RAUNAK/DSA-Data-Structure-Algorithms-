/*You are given a 2D binary array arr[][] consisting of only 1s and 0s. Each row of the array is sorted in non-decreasing order. Your task is to find and return the index of the first row that contains the maximum number of 1s. If no such row exists, return -1.*/

#include<iostream>
#include<vector>
using namespace std;

int maxRow(vector<vector<int>> matrix){
  int maxrow=-1;
  int row=0,col=matrix[0].size()-1;
  while(row<matrix.size() && col>=0){
    if(matrix[row][col]==1){
      maxrow=row;
      col--;
    }
    else
    row++;
  }
return maxrow;
}


int main(){
  int n,m;
  cout<<"Enter number of rows and columns in the matrix:\n";
  cin>>n>>m;

  vector<vector<int>> matrix(n,vector<int>(m));
  cout<<"Enter elements of 0's and 1's in the matrix:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>matrix[i][j];
    }
  }

  int result=maxRow(matrix);

  cout<<"Row with maximum 1 is "<<result<<endl;
}