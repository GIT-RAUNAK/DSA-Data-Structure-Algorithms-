//Sum of n Elements.
#include<iostream>
using namespace std;
int main()
{
  int arr[1000];
  int n;
  cout<<"Enter the number of elements:\n";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cout<<"arr["<<i<<"]:";
    cin>>arr[i];
  }
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=arr[i];
  }
  cout<<"Sum of the "<<n<<" elements is: "<<sum;
}