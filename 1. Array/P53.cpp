/*You are given 3 arrays A, B and C. All 3 of the arrays are sorted.

Find i, j, k such that :

max(abs(A[i] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i])) is minimized.

Return the minimum max(abs(A[i] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i]))

**abs(x) is absolute value of x and is implemented in the following manner : **

      if (x < 0) return -x;
      else return x;*/

#include<iostream>
#include<climits>
using namespace std;

int max3(int a,int b,int c){
  int max_ab=(a>b)?a:b;
  return (max_ab>c)?max_ab:c;
}
int min3(int a,int b,int c){
  int min_ab=(a<b)?a:b;
  return (min_ab<c)?min_ab:c;
}

int minimize(int* A,int n1,int* B, int n2,int* C,int n3){
  int i=0,j=0,k=0;
  int min=INT_MAX;

  while(i<n1 && j<n2 && k<n3){
    int max_val=max3(A[i],B[j],C[k]);
    int min_val=min3(A[i],B[j],C[k]);

    int diff=max_val-min_val;
    if(diff<min)
    min=diff;

    if(min_val==A[i])
    i++;
    else if(min_val==B[j])
    j++;
    else
    k++;
  }
  return min;
}

int main(){
  int n1,n3,n2;
  cout<<"Enter number of elements in array 1:\n";
  cin>>n1;
  int arr1[1000];
  cout<<"Enter SORTED elements in the array1:\n";
  for(int i=0;i<n1;i++){
    cin>>arr1[i];
  }
  cout<<"Enter number of elements in array 2:\n";
  cin>>n2;
  int arr2[1000];
  cout<<"Enter SORTED elements in the array2:\n";
  for(int i=0;i<n2;i++){
    cin>>arr2[i];
  }
  cout<<"Enter number of elementsin array 3:\n";
  cin>>n3;
  int arr3[1000];
  cout<<"Enter SORTED elements in the array3:\n";
  for(int i=0;i<n3;i++){
    cin>>arr3[i];
  }

  int result=minimize(arr1,n1,arr2,n2,arr3,n3);
  cout<<result<<endl;
}