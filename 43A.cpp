//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli n;
    cin>>n;
    string s;
    vector<string>ms;
    if(n==1) {
      cin>>s;
      cout<<s<<endl;
    }
    else {
    while (n--)
    {
      cin>>s;
      ms.push_back(s);

    }
    sort(ms.begin(),ms.end());

    if(n%2==0){
      lli res = (n/2)+1;
      cout<<res<<endl;
      cout<<*(ms.begin() + res);
      }
      else {
        lli res = (n/2);
        cout<<*(ms.begin() + res);
       
      }
    }

    
 
  
}