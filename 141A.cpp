#include <bits/stdc++.h>
using namespace std;
int main()
{
  string a, b, c;
  cin >> a >> b >> c;

  multiset<char> mp;
  multiset<char> mp2;
  for (size_t i = 0; i < a.length(); i++)
  {
    mp.insert(a[i]);
  }
  for (size_t i = 0; i < b.length(); i++)
  {
    mp.insert(b[i]);
  }
  for (size_t i = 0; i < c.length(); i++)
  {
    mp2.insert(c[i]);
  }

  if (mp == mp2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}