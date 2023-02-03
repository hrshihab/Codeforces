// test
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{

  lli test, n, a;
  vector<pair<lli, lli>> vec;
  vector<pair<lli, lli>> vec2;

  cin >> test;
  for (size_t i = 0; i < test; i++)
  {
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
      cin >> a;
      vec.push_back(make_pair(i, a));
    }
    for (size_t i = 0; i < n; i++)
    {
      vec2.push_back(make_pair(vec[i].second, vec[i].first));
    }
    sort(vec2.begin(), vec2.end());
    // for(auto it:vec2) cout<<it.first<<" "<<it.second<<endl;

    if (vec2[0].first == ((vec2[1].first)))
    {
      cout << vec2[n - 1].second + 1 << endl;
    }
    else
      cout << vec2[0].second + 1 << endl;

    vec.clear();
    vec2.clear();
  }
}