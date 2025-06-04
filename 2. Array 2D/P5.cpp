#include<iostream>
#include<climits>
using namespace std;

void smallest(int arr[][4],int row,int column){
  int smallest=INT_MAX;
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      if(arr[i][j]<smallest)
      smallest=arr[i][j];
    }
  }

  cout<<"Smallest element in the array is "<<smallest<<endl;
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
  smallest(arr,n,4);
}