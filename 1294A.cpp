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
    ll n;
    cin>>t;
    while(t--)
    {
       
       ll a[3];
       for (size_t i = 0; i < 3; i++)
       {
        cin>>a[i];
       }
       cin>>n;
       sort(a,a+3);
       ll n1,n2;
       n1 = a[2] - a[0];
       n2 = a[2] - a[1];
       if(n<(n1+n2)) cout<<"NO\n";
       else {
        if((n-(n1+n2))%3==0) cout<<"YES\n";
        else cout<<"NO\n";
       }
        
    }

    return 0;
}