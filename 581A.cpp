#include <bits/stdc++.h>
using namespace std;
int main()
{
  int r, b, count, same = 0, diff = 0;
  cin >> r >> b;
  if (r == b)
    count = 1;
  else if (r > b)
    count = r;
  else
    count = b;
  for (size_t i = 0; i < count; i++)
  {
    if (r == b)
    {
      same = 0;
      diff = r;
      break;
    }
    else if (r > b)
    {
      if (r != 0 && b != 0)
      {
        diff++;
        r--;
        b--;
      }
      else
      {
        
        if (r >= 2)
          same = r / 2;
          break;
      }
    }
    else if (r < b)
    {
      if (r != 0 && b != 0)
      {
        diff++;
        r--;
        b--;
      }
      else
      {
        if (b >= 2)
         same = b / 2; break;
          
      }
    }
  }
  cout << diff << " " << same << endl;
}