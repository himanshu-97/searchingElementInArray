#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
 for (int i = 0; i < n; i++)
 {
  if (key == arr[i])
  {
   return i;
  }
 }
 return -1;
}

int main()
{
 int n, key;
 cout << "Enter Size of Array" << endl;
 cin >> n;
 int arr[n];

 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }

 cout << "Enter Element to Search its Position" << endl;
 cin >> key;

 cout << linearSearch(arr, n, key) << endl;

 return 0;
 //TIME COMPLEXITY O(n), because we are traversing whole arr.
}
