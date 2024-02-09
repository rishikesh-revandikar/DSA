#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
  int pivot = arr[low];
  int i = low;
  int j = high;

  while (i < j)
  {
    while (arr[i] <= pivot && i <= high - 1)
    {
      i++;
    }

    while (arr[j] > pivot && j >= low + 1)
    {
      j--;
    }

    if (i < j)
    {
      swap(arr[i], arr[j]);
    }
  }

  swap(arr[low], arr[j]);
  return j;
}

void quicksort(vector<int> &arr, int low, int high)
{
  if (low < high)
  {
    int pIndex = partition(arr, low, high);
    quicksort(arr, low, pIndex);
    quicksort(arr, pIndex + 1, high);
  }
}

int main()
{
  int n;
  cout << "Enter number of elements in the array :: ";
  cin >> n;

  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    cout << "Element (" << i + 1 << ") :: ";
    int ele;
    cin >> ele;
    arr.push_back(ele);
  }

  cout << "\nThe current array is :: [ ";
  for (auto it : arr)
  {
    cout << it << " ";
  }
  cout << " ]" << endl;

  quicksort(arr, 0, n - 1);

  cout << "\nThe sorted array is :: [ ";
  for (auto it : arr)
  {
    cout << it << " ";
  }
  cout << " ]" << endl;
  return 0;
}