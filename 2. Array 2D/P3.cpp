/*Given a matrix of size n*n, Print sum of diagonal element.*/

#include<iostream>
using namespace std;

void diagonalsum(int arr[][3],int n){
  int sum=0;
  for(int i=0;i<n;i++){
      sum+=arr[i][i];
      sum+=arr[i][n-i-1];
    }
  if(n%2==1)
  sum-=arr[n/2][n/2];

  cout<<sum<<endl;
}

int main(){
  int arr[3][3];
  cout<<"Enter elements in the 2D Array:\n";
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }
  diagonalsum(arr,3);
}