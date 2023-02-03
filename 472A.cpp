#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
   long long int arr[1000000] = {0};
   arr[0] = 1;arr[1] = 1;
  for (long long int i = 2; i < 1000000; i++)
  {
    for (long long int j = i * i; j < 1000000; j += i)
    {
      arr[j - 1] = 1;
    }
  }
 
  long long int num, a = 4, b;
  cin >> num;
  b = num - 4;
  while (1)
  {
    //cout<<a<<" "<<arr[a-1]<<" "<<b<<" "<<arr[b-1]<<endl;
    if (arr[b-1]==1 && arr[a-1]==1)
    {
      
        cout << a << " " << b << endl;
        break;
      
      
    }
    else
     { b--;
        a++;}
    
  }
}