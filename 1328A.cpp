// test
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long test, a, b, count = 0;
  cin >> test;
  while (test--)
  {
    cin >> a >> b;
    count = 0;
    if (a % b == 0)
      count = 0;
    else
    {
      count = b - ( (a % b));
    }
    cout << count << endl;
  }
}