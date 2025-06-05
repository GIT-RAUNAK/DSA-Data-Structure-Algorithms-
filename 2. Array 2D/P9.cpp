/*Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.*/

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generatematrix(int n){
  vector<vector<int>> result(n,vector<int>(n));
  int top=0,bottom=n-1;
  int left=0,right=n-1;
  int k=1;

  while(top<=bottom && left<=right){
    for(int i=left;i<=right;i++){
      result[top][i]=k;
      k++;
    }
    top++;
    for(int i=top;i<=bottom;i++){
      result[i][right]=k;
      k++;
    }
    right--;
  if(top<=bottom){
    for(int i=right;i>=left;i--){
      result[bottom][i]=k;
      k++;
    }
    bottom--;
  }
  if(left<=right){
    for(int i=bottom;i>=top;i--){
      result[i][left]=k;
      k++;
    }
    left++;
  }
  }
  return result;
}

int main(){
  int n;
  cout<<"Enter Rows=Column value: ";
  cin>>n;
  vector<vector<int>> result=generatematrix(n);
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    cout<<result[i][j]<<" ";
    }
    cout<<endl;
  }
}
