//fast
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();

    int n, t;
    cin >> n >> t;
    int c[n];
    int p = 0;

    for(int i = 0; i < n; i++) cin >> c[i];

    while(p < t - 1) p += c[p];

    if(p == t - 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
