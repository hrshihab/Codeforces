// test
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
  lli count, a, n, res;
  cin >> count;

  for (size_t i = 0; i < count; i++)
  {
    cin >> a >> n;

    lli res = abs(a - n) / 10;
    if (abs(a - n) % 10 != 0)
    {
      cout << res + 1 << endl;
    }
    else
      cout << res << endl;
  }
}