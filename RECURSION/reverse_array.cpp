#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
  cout << "Reversed array :: [ ";
  for (int i = 0; i < n; i++)
  {
    cout << " " << arr[i] << " ";
  }
  cout << " ]" << endl;
}

void reverseArrayNormal(int arr[], int n)
{
  int i = 0;
  int j = n - 1;

  while (i < j)
  {
    swap(arr[i], arr[j]);
    i++;
    j--;
  }
}

void reverseArrayByRecursion(int arr[], int l, int r)
{
  if (l >= r)
  {
    return;
  }
  swap(arr[l], arr[r]);
  reverseArrayByRecursion(arr, l + 1, r - 1);
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int n = 5;
  // print(arr, n);

  // reverseArrayNormal(arr, n);
  reverseArrayByRecursion(arr, 0, n - 1);
  print(arr, n);
  return 0;
}