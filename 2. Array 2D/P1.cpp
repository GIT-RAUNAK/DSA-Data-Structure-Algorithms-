//Print sum of each column in 2D array.

#include<iostream>
using namespace std;

void sum(int arr[][4],int row,int column){
  for(int i=0;i<column;i++){
    int sum=0;
    for(int j=0;j<row;j++){
      sum+=arr[j][i];
    }
    cout<<"Sum of column "<<i+1<<" is "<<sum<<"\n";
  }
}

int main(){
  int n;
  cout<<"Enter number of rows taking number of column constant to 4: ";
  cin>>n;
  int arr[n][4];
  cout<<"Enter elements in the 2D Array:\n";
  for(int i=0;i<n;i++){
    for(int j=0;j<4;j++){
      cin>>arr[i][j];
    }
  }
  sum(arr,n,4);
}