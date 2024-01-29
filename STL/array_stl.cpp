#include <bits/stdc++.h>
using namespace std;

int main()
{

  array<int, 6> arr = {1,
                       2,
                       3,
                       4,
                       5,
                       6};

  int size = arr.size();

  for (int i = 0; i < size; i++)
  {
    // cout << arr[i] << " ";
    cout << arr.at(i) << " ";
  }
  cout << endl;

  cout << "is empty :: " << arr.empty() << endl;

  cout << "Front element :: " << arr.front() << endl;

  cout << "Last element :: " << arr.back() << endl;

  return 0;
}