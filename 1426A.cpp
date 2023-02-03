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
    ll n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if(n==1 || n==2) cout<<"1"<<endl;
        
        else {
            ll res = (n-2)/x;
        if((n-2)%x!=0) res++;
        cout<<res+1<<endl;
        }
        
    }

    return 0;
}