// test
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int test, n, count = 0, rem;
  cin >> test;
  int arr[test], i = 0;
  while (i < test)
  {
    cin >> n;
    arr[i] = n;
    i++;
  }

  sort(arr, arr + test);
  for (size_t i = 0; i < test; i++)
  {

    cout << arr[i] << " ";
  }
  cout << endl;

  for (size_t i = 0; i < test; i++ )
  {
    int sum = arr[i];
    if (sum == 4)
     { count++;
       cout << endl;
  cout <<" four: "<< count << endl;}
    else
    {
      while (sum < 4)
      {
        sum += arr[i+1];
        if (sum <= 4)
        {
          i++;
          
          cout << " sum " << sum << " ";
        }
        
        else break;
      } 
      count++;
       cout << endl;
  cout << count << endl;
    }
  }
  cout << endl;
  cout << count << endl;
}