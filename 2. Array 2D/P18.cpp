/*You are given an integer k and matrix mat. Rotate the elements of the given matrix to the left k times and return the resulting matrix.*/

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> rotated(vector<vector<int>> matrix){
  int n=matrix.size();
  int m=matrix[0].size();

  vector<vector<int>> result(m,vector<int>(n));

  //Transpose
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      result[j][i]=matrix[i][j];
    }
  }
  //Reverse
  for(int j=0;j<result[0].size();j++){
    int top=0,bottom=result.size()-1;
    while(top<bottom){
    swap(result[top][j],result[bottom][j]);
    top++;
    bottom--;
    }
  }

  return result;
}

int main(){
  int n,m;
  cout<<"Enter the number of rows and columns in the matrix respectively:\n";
  cin>>n>>m;

  vector<vector<int>> matrix(n,vector<int> (m));
  cout<<"Enter elements in the matrix:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>matrix[i][j];
    }
  }

  int k;
  cout<<"Enter the number of rotation: ";
  cin>>k;

  k=k%4;

  while(k>0){
    matrix=rotated(matrix);
    k--;
  }

  cout<<"Matrix after Kth Rotation:\n";
  for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[0].size();j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }

  return 0;
}