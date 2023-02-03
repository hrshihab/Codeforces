#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
void print(int a, int b, int c)
{
  cout << a << " " << b << " " << c << endl;
}
int main()
{
  int t;
  cin >> t;
  int a, b, c;
  vector<int> vec;
  int i = 0;

  for (int i = 0; i < t; i++)
  {
    cin >> a >> b >> c; 
    if (a == b && b == c)
    {
      print(1, 1, 1);
      continue;
    }
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);

    int el = *max_element(vec.begin(), vec.end());
    if (a == el)
    {
      print(0, el - b + 1, el - c + 1);
    }
    else if (b == el)
    {
      print(el - a + 1, 0, el - c + 1);
    }
    else if (c == el)
    {
      print(el - a + 1, el - b + 1, 0);
    }
    vec.clear();
  }
  system("pause>0");
}
