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
    ll n,a,b,c,d,count = 0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        count = 0 ;
        if(a>b ){
          if(c>d && c>b && a>d) count++;
          else if(d>c && d>b && a>c) count++;  
        }
        else {
          if(c>d && c>a && b>d) count++;
          else if(d>c && d>a && b>c) count++; 
        }

        if(count==0) cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
}