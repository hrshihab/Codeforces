#include <bits/stdc++.h>
using namespace std;
void sorts(map<int, int> mm)
{
  map<int, int> mp2;
  for (auto it : mm)
  {
    mp2.insert({it.second, it.first});
  }
  for (auto it : mp2)
  {
    cout << it.second << " ";
  }
  cout << endl;
}

int main()
{
  map<int, int> mp;
  int n, x;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> x;
    mp[i] = x;
  }

  sorts(mp);
}