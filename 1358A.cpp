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
    double m,n;
    cin>>t;
    while(t--)
    {
      cin>>m>>n;
       double r  = round((m*n )/2);
       cout<<fixed<<setprecision(0)<<r<<endl;
    }

    return 0;
}