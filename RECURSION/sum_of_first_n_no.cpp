#include <bits/stdc++.h>
using namespace std;

void printSumParameterised(int i, int sum)
{
  if (i < 1)
  {
    cout << "The sum is :: " << sum << endl;
    return;
  }
  printSumParameterised(i - 1, sum + i);
}

int sumFunctional(int n)
{
  if (n == 0)
  {
    return 0;
  }

  return n + sumFunctional(n - 1);
}

int main()
{

  // printSumParameterised(5, 0);
  cout << "sum is :: " << sumFunctional(5) << endl;

  return 0;
}