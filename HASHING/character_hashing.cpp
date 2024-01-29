#include <bits/stdc++.h>
using namespace std;

int main()
{
  string st = "abcdeefga";

  int hash[1000] = {0};

  int n = st.length();

  for (int i = 0; i < n; i++)
  {
    int ind = st[i] - 'a';

    hash[ind] += 1;
  }

  char ch = 'f';

  int ind = ch - 'a';

  cout << "Count of " << ch << " :: " << hash[ind] << endl;

  return 0;
}