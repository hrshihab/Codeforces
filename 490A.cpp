// test
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{

  vector<pair<lli, lli>> vec;

  lli n;
  cin >> n;
  lli a;
  vector<lli> arr;
  vector<lli> brr;
  vector<lli> crr;
  set<lli> st;

  for (lli i = 0; i < n; i++)
  {
    cin >> a;
    vec.push_back(make_pair(i + 1, a));
  }
  for (size_t i = 0; i < n; i++)
  {
    if (vec[i].second == 1)
      arr.push_back(i + 1);
    else if (vec[i].second == 2)
      brr.push_back(i + 1);
    else
      crr.push_back(i + 1);
  }

  st.insert(arr.size());
  st.insert(brr.size());
  st.insert(crr.size());
  lli large = *st.begin();
  cout << large << endl;
  for (size_t i = 0; i < large; i++)
  {
    cout << *(arr.begin() + i) << " " << *(brr.begin() + i) << " " << *(crr.begin() + i) << endl;
  }
}