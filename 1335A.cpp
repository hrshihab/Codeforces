//test
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long test,n;
  cin>>test;
  while (test--)
  {
    cin>>n;
    long long res = 0;
    if(n<3) cout<<res<<endl;
    else{
       res = n/2 + 1;
      cout<<n-res<<endl;
    }
  }
  
}