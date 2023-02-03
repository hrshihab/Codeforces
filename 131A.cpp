#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int count = 0;
  cin >> s;
  for (size_t i = 0; i < s.length(); i++)
  {
    if (s[i] >= 'A' && s[i] <= 'Z')
      count = 0;
    else if (s[0] >= 'a' && s[0] <= 'z')
    {
      if (i == 0)
        continue;
      if (s[i] >= 'A' && s[i] <= 'Z')
        count = 0;
      else
      {
        count++;
        break;
      }
    }
    else
    {
      count++;
      break;
    }
  }

  if (count != 0)
    cout << s << endl;
  else
  {
    for (size_t i = 0; i < s.length(); i++)
    {
      if (i == 0)
      {
        if (s[0] >= 'A' && s[0] <= 'Z')
          putchar(tolower(s[i]));
        else
          putchar(toupper(s[i]));
      }

      else
        putchar(tolower(s[i]));
    }
  }
}