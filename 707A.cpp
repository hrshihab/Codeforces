//fast
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll n,m,count = 0;
    char a;
    cin>>n>>m;
    for (size_t i = 0; i < n; i++)
    {
      for (size_t j = 0; j < m; j++)
      {
        cin>>a;

        if(a=='C' || a=='M'||a=='Y') count++;
         
      } 
      
    }
    if(count!=0) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
    

    return 0;
}