#include <bits/stdc++.h>
using namespace std;

void printName(string name, int n, int i)
{

  if (i > n)
  {
    return;
  }
  cout << name << endl;
  i++;
  printName(name, n, i);
}

int main()
{
  printName("rishikesh", 5, 1);

  return 0;
}