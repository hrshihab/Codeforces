#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  for (size_t i = 0; i < s.length(); i++)
  {
    if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
    {
      i = i + 2;
  
    }

    else
    {
      cout << s[i];
      if (s[i+1] == 'W' && s[i + 2] == 'U' && s[i + 3] == 'B') cout << " ";
    }
  }
}