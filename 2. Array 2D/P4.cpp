#include<iostream>
#include<climits>
using namespace std;

void largest(int arr[][4],int row,int column){
  int largest=INT_MIN;
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      if(arr[i][j]>largest)
      largest=arr[i][j];
    }
  }

  cout<<"Largest element in the array is "<<largest<<endl;
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
  largest(arr,n,4);
}