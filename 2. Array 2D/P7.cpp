/*Given a Matrix of size n*m (n=rows and m= cols). Reverse each column of the matrix.*/
#include<iostream>
#include<vector>
using namespace std;

void reversematrix(vector<vector<int>>& mat,int n,int m){
  for(int j=0;j<m;j++){
    int top=0,bottom=n-1;
    while(top<bottom){
      swap(mat[top][j],mat[bottom][j]);
      top++;
      bottom--;
    }
  }
}

int main(){
  int n,m;
  cout<<"Enter number of rows and  columns in the array:\n";
  cin>>n>>m;
  vector<vector<int>> mat(n,vector<int>(m));
  cout<<"Enter the elements:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>mat[i][j];
    }
  }
  reversematrix(mat,n,m);
  cout<<"Matrix with the reverse elements is:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<mat[i][j]<<" ";
    }
    cout<<endl;
  }
}