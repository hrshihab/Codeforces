// test
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
  lli count, a, sum = 0, max = 0, min = 0;
  cin >> count;
  lli arr[count];
  for (size_t i = 0; i < count; i++)
  {
    cin >> a;
    arr[i] = a;
  }
  max = arr[0];
  min = arr[0];
  for (size_t i = 0; i < count - 1; i++)
  {
    if (arr[i] < arr[i + 1] && max < arr[i + 1])
    {
      max = arr[i + 1];
      sum++;
    }
    else if (arr[i] > arr[i + 1] && min > arr[i + 1])
    {
      min = arr[i + 1];
      sum++;
    }
  }
  cout << sum << endl;
}