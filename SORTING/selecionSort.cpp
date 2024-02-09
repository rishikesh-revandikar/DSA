#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[], int n)
{
  for (int i = 0; i <= n - 2; i++)
  {
    int min = i;
    for (int j = i; j <= n - 1; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    swap(arr[min], arr[i]);
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

  selectionsort(arr, n);
  return 0;
}