#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
 int s = 0;
 int e = n;
 while (s <= e)
 {
  int mid = (s + e) / 2;
  if (arr[mid] == key)
  {
   return mid;
  }
  else if (arr[mid] > key)
  {
   e = mid - 1;
  }
  else
  {
   s = mid + 1;
  }
 }
 return -1;
}

int main()
{
 int n;
 cout << "Enter Size of Array" << endl;
 cin >> n;

 int arr[n];

 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
 }

 int key;
 cout << "Enter element to search its position" << endl;
 cin >> key;

 cout << binarySearch(arr, n, key) << endl;

 return 0;
 //TIME COMPLEXITY- O(LOG n) base 2.
}
