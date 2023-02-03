//fast
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    ll n,l,emp,count=0;
    cin>>n;
    for (size_t i = 1; i <= n/2; i++)
    {
      emp = n - i;
      if(emp%i==0) count++;
    }
    cout<<count<<endl;
    

    return 0;
}