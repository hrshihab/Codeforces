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
       cin>>n;
       ll arr[n],sum1,sum2;
       for (size_t i = 0; i < n; i++)
       {
        arr[i] = pow(2,i+1);
       }
       sum1 = accumulate(arr,arr+((n/2)-1),0);
       sum1+=arr[n-1];

       sum2 = accumulate(arr+(n/2-1),arr+(n-1),0);
       cout<<sum1-sum2<<endl;
       
        
    }

    return 0;
}