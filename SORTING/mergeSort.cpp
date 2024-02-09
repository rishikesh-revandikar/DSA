#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
  vector<int> temp;

  int left = low;
  int right = mid + 1;

  while (left <= mid && right <= high)
  {
    if (arr[left] <= arr[right])
    {
      temp.push_back(arr[left]);
      left++;
    }
    else
    {
      temp.push_back(arr[right]);
      right++;
    }
  }

  while (left <= mid)
  {
    temp.push_back(arr[left]);
    left++;
  }

  while (right <= high)
  {
    temp.push_back(arr[right]);
    right++;
  }

  for (int i = low; i <= high; i++)
  {
    arr[i] = temp[i - low];
  }
}

void mergesort(vector<int> &arr, int low, int high)
{
  if (low == high)
    return;

  int mid = (low + high) / 2;

  mergesort(arr, low, mid);
  mergesort(arr, mid + 1, high);
  merge(arr, low, mid, high);
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

  mergesort(arr, 0, n - 1);

  cout << "\nThe sorted array is :: [ ";
  for (auto it : arr)
  {
    cout << it << " ";
  }
  cout << " ]" << endl;
  return 0;
}