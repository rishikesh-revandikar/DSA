#include <bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n)
{
  for (int i = 0; i <= n - 1; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      swap(arr[j - 1], arr[j]);
      j--;
    }
  }

  cout << "The sorted array is :: [ ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << " ]" << endl
       << endl;
}

int main()
{
  int n;
  cout << "Enter number of elements in the array :: ";
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Element (" << i + 1 << ") :: ";
    cin >> arr[i];
  }

  cout << "The current array is :: [ ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << " ]" << endl;

  insertionsort(arr, n);
  return 0;
}