#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t, n, a, count;
  cin >> t;
  vector<int> vec;
  while (t--)
  {
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
      cin >> a;
      vec.push_back(a);
    }
    count = 0;
    if (n == 1)
    {
      cout << "YES" << endl;
      continue;
    }

    else
    {
      sort(vec.begin(), vec.end());
      for (size_t i = 0; i < n - 1; i++)
      {
        
        if ((*(vec.begin()+i+1) - *(vec.begin()+i)) > 1)
        {
          count++;
          break;
        }
      }

      if (count == 0)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
    vec.clear();
  }
}