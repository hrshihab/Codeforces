#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  string s;
  cin >> n;
  cin >> s;
  transform(s.begin(), s.end(), s.begin(), ::toupper);
  set<char> st;
  for (size_t i = 0; i < s.length(); i++)
  {
    st.insert(s[i]);
  }
  if (st.size() == 26)
    cout << "YES";
  else
    cout << "NO";
}