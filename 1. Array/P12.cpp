//You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

//Return the sum of all the unique elements of nums.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        int index=0;
        for(int j=0;j<nums.size();j++)
        {
            if(i!=j && nums[i]==nums[j]){
            index++;
            break;}
        }
        if(index==0)
        sum+=nums[i];
    }
    cout<<sum<<endl;
}
