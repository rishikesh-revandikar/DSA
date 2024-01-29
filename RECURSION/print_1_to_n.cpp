#include <bits/stdc++.h>
using namespace std;

void printOneToN(int n, int i)
{

  if (n < 1)
  {
    return;
  }

  printOneToN(n - 1, i);
  cout << n << endl;
}

int main()
{

  printOneToN(10, 10);

  return 0;
}