#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter number of elements :: ";
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Enter element " << i + 1 << " :: ";
    cin >> arr[i];
  }

  map<int, int> mpp;

  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]]++;
  }
  int find = 3;

  cout << find << " appeared :: " << mpp[find] << endl;

  return 0;
}