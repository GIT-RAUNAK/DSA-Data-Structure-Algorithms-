/*Given 2 matrices A and B, Print A-B*/

#include<iostream>
using namespace std;

void diff(int arr1[][4],int arr2[][4],int row,int column){
  int ans[row][column];
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      ans[i][j]=arr1[i][j]-arr2[i][j];
    }
  }
  cout<<"Difference of two array is:\n";
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<"\n";
  }
}

int main(){
  int n;
  cout<<"Enter number of rows taking number of column constant to 4: ";
  cin>>n;
  int arr1[n][4],arr2[n][4];
  cout<<"Enter elements in the First Array:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<4;j++){
      cin>>arr1[i][j];
    }
  }
  cout<<"Enter elements in the Second Array:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<4;j++){
      cin>>arr2[i][j];
    }
  }

  diff(arr1,arr2,n,4);
}