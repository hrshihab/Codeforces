//fast
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int test;
    ll a,b;
    cin>>test;
    while(test--)
    {
      cin>>a>>b;
        ll res = b-a;
        if(res == 0) cout<<"0"<<endl;
        else if(res>0) {
          if(res%2!=0) {
            cout<<"1"<<endl;
          }
          else cout<<"2"<<endl;
        }
        else {
          if(res%2==0) {
            cout<<"1"<<endl;
          }
          else cout<<"2"<<endl;
        }
    }

    return 0;
}