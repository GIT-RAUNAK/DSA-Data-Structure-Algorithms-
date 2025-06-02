//Given an unsorted array arr[] and two elements num1 and num2. The task is to count the number of elements that occur between the given elements (excluding num1 and num2). If there are multiple occurrences of num1 and num2, we need to consider the leftmost occurrence of num1 and the rightmost occurrence of num2.

#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the size of array:\n";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements:\n";
  for(int i=0;i<n;i++)
  {
    cout<<"[arr"<<i<<"]:";
    cin>>arr[i];
  }
  int num1,num2,count=0;
  cout<<"Enter two elements:\n";
  cin>>num1>>num2;
  int index1=-1,index2=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==num1)
            {
                index1=i;
                break;
            }
        }
        for(int j=n-1;j>index1;j--){
            if(arr[j]==num2)
            {
                index2=j;
                break;
            }
        }
        if(index1==-1 || index2==-1)
        cout<<"0";
        else
        cout<<index2-index1-1;
 
}