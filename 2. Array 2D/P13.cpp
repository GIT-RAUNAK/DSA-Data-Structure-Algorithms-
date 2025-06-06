/*Given a matrix mat[][], print it in Wave Form. */

#include<iostream>
#include<vector>
using namespace std;

vector<int> waveform(vector<vector<int>> matrix){
  int n=matrix.size();
  int m=matrix[0].size();
  vector<int> result;
  for(int i=0;i<m;i++){
    if(i%2==0){
      for(int j=0;j<n;j++){
        result.push_back(matrix[j][i]);
      }
    }
    else{
      for(int j=n-1;j>=0;j--){
        result.push_back(matrix[j][i]);
      }
    }
  }
  return result;
}

int main(){
  int n,m;
  cout<<"Enter number of rows and columns respectively: ";
  cin>>n>>m;
  vector<vector<int>> matrix(n,vector<int>(m));
  cout<<"Enter elements in the matrix:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>matrix[i][j];
    }
  }

  vector<int> result=waveform(matrix);

  cout<<"Wave Form of the matrix is:\n";
  for(int i=0;i<n*m;i++){
    cout<<result[i]<<" ";
  }
}