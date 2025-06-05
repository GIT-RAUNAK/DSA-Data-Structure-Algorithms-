/*Given n non-negative integers a1, a2, ..., an,

where each represents a point at coordinate (i, ai).

'n' vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0).

Find two lines, which together with x-axis forms a container, such that the container contains the most water.

Your program should return an integer which corresponds to the maximum area of water that can be contained ( Yes, we know maximum area instead of maximum volume sounds weird. But this is 2D plane we are working with for simplicity ).*/

#include<iostream>
#include<algorithm>
using namespace std;

int maxArea(int* height,int n){
  int maxArea=0;
  int start=0,end=n-1;
  while(start<end){
    int width=end-start;
    int h=min(height[start],height[end]);
    maxArea=max(maxArea,h*width);

    if(height[start]<height[end]) start++;
    else end--;

  }
  return maxArea;
}

int main(){
  int n;
  cout<<"Enter number of lines:\n";
  cin>>n;
  int height[1000];
  cout<<"Enter height of the line:\n";
  for(int i=0;i<n;i++){
    cin>>height[i];
  }
  int result=maxArea(height,n);
  cout<<"Area of container with most water is "<<result<<endl;
}