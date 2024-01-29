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

  int hash[15] = {0};

  for (int i = 0; i < n; i++)
  {
    hash[arr[i]] += 1;
  }

  int find = 3;

  cout << find << " appeared :: " << hash[find] << endl;

  return 0;
}