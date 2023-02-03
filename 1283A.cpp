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
    ll h,m,hr,min,minBefore;
    cin>>t;
    while(t--)
    {
        cin>>h>>m;
        hr = (23 - h)*60;
        min = (60 - m);
        minBefore = hr+min;
        cout<<minBefore<<"\n";
    }

    return 0;
}