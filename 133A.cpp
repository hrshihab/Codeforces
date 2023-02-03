#include <bits/stdc++.h>
using namespace std;
int main()
{
  int count = 0;
  string s;
  cin >> s;
  int length = s.size();
  for (int i = 0; i <= length; i++)
  {
    if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
    {
      cout << "YES" << endl;
      count++;
      break;
    }
  }
  if (count == 0)
    cout << "NO" << endl;
}