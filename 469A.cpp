#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, p, q, a;
  cin >> n;
  set<int> st;
  cin >> p;
  for (size_t i = 0; i < p; i++)
  {
    cin >> a;
    st.insert(a);
  }
  cin >> q;
  for (size_t i = 0; i < q; i++)
  {
    cin >> a;
    st.insert(a);
  }
  int count = st.size();
  if (count == n)
    cout << "I become the guy." << endl;
  else
    cout << "Oh, my keyboard!" << endl;
}