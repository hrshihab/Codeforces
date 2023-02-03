//fast
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t,count;
    string s;
    cin>>t;
    while(t--)
    {
      count = 0;
       cin>>s;
       int len = s.length();
       if(len%2!=0) cout<<"NO\n";
       else{
        int j = len/2;
        for (size_t i = 0; i < len/2; i++)
        {
          if(s[i]!=s[j]) {
            count++;
            break;
          }
          j++;
          
          
        }
        if(count==0) cout<<"YES\n";
        else cout<<"NO\n";
        
       } 

    }

    return 0;
}