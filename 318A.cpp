// test
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n, k, len;
  cin >> n >> k;
  len = n / 2;
  if (n % 2 == 1)
    len += 1;

  if (len >= k)
    cout << (k * 2) - 1 << endl;
  else
  {
    len = k - len;
    cout << len * 2 << endl;
  }
  return 0; 
}