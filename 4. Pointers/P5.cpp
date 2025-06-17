/*Given an array in c++

int arr[5] = {1,2,3,4,5};

What is the difference between arr and &arr. Try to explore it on your own.
*/

#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 4, 5};

  cout << "arr (decays to &arr[0]):     " << arr << endl;
  cout << "&arr (address of whole arr): " << &arr << endl;

  cout << "*arr (first element):        " << *arr << endl;
  cout << "*&arr (whole array):         " << *&arr << endl;

  cout << "Size of arr:                 " << sizeof(arr) << endl;
  cout << "Size of &arr:                " << sizeof(&arr) << endl;
  cout << "Size of arr[0]:              " << sizeof(arr[0]) << endl;
}
