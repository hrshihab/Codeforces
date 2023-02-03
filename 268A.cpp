#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n], b[n];
  int x, y, count = 0;
  for (size_t i = 0; i < n; i++)
  {
    cin >> x >> y;
    a[i] = x;
    b[i] = y;
  }

  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j <= n - 1; j++)
    {
      if (i == j)
        continue;

      else if (a[i] == b[j]) count++;
    }
  }
  cout<<count<<endl;
}