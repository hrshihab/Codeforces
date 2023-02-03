// test
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int test, a,total;
  cin >> test;
  vector<int> vec;
  while (test--)
  {
    cin >> a;
    vec.push_back(a);
  }
  int max = vec[0], min = vec[0], ind = 0, ind2 = 0;
  for (auto it = vec.begin(); it != vec.end(); it++)
  {
    if (*it > max)
    {
      max = *it;
      ind = it - vec.begin();
    }
    if (*it <= min)
    {
      min = *it;
      ind2 = it - vec.begin();
    }
  }
  int size  = vec.size();
  int swap = ind;
  int swap2 = abs(size-1 - ind2);
  if(ind > ind2)  total = swap + swap2 - 1;
  else total = swap + swap2;
  cout << total;
  
}