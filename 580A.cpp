// test
#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int count, a, counter = 1;
  cin >> count;
  long long int arr[count];
  for (size_t i = 0; i < count; i++)
  {
    cin >> a;
    arr[i] = a;
  }
  long long int max = 1;
  for (size_t i = 0; i < count-1; i++)
  {
    if (arr[i] <= arr[i+1])
    {
      counter++;
      if (counter >= max)
        max = counter;
      
    }
    else
    {
      counter = 1;
    }
  }
  cout << max;
}