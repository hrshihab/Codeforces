// fast
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base::sync_with_stdio(false), cin.tie(NULL));
using namespace std;
int main()
{
  fastread();

  ll arr[51] = {0};
  for (size_t i = 2; i <= 50; i++)
  {
    for (size_t j = i * i; j <= 50; j += i)
    {
      arr[j] = 1;
    }
  }

  ll n, m, count = 0;
  cin >> n >> m;
  if (arr[m] ==1)
  {
    cout << "NO\n";
  }

  else
  {
    for (size_t i = n + 1; i < m; i++)
    {
      if (arr[i] == 0)
      {
        count++;
        break;
      }
    }
    if (count == 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}