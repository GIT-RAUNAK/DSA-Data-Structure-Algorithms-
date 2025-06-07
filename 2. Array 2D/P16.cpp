/*Given a 2D square matrix mat[][] of size n x n, turn it by 180 degrees without using extra space.

Note: You must rotate the matrix in place and modify the input matrix directly.*/

#include<iostream>
#include<vector>
using namespace std;

void rotate180(vector<vector<int>>& matrix){
  int n=matrix.size();
  //Reversing element in the column
  for(int j=0;j<n;j++){
    int top=0,bottom=n-1;
    while(top<bottom){
      swap(matrix[top][j],matrix[bottom][j]);
      top++;
      bottom--;
    }
  }
  //Reversing Elements in the rows
  for(int i=0;i<n;i++){
    int top=0,bottom=n-1;
    while(top<bottom){
      swap(matrix[i][top],matrix[i][bottom]);
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
  rotate180(matrix);
  cout<<"Matrix after 180 degree rotation is:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
}