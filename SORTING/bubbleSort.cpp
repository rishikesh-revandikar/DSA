#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{
  for (int i = n - 1; i >= 1; i--)
  {
    for (int j = 0; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
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

  bubblesort(arr, n);
  return 0;
}