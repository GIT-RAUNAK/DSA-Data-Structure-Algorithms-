//Given an unsorted array arr[ ] having both negative and positive integers. The task is to place all negative elements at the end of the array without changing the order of positive elements and negative elements.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> positive;
    vector<int> negative;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0)
            positive.push_back(arr[i]);
        else
            negative.push_back(arr[i]);
    }

    positive.insert(positive.end(), negative.begin(), negative.end());

    for(int i = 0; i < n; i++) {
        arr[i] = positive[i];
    }

    cout << "Array after segregation:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
