//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli a[4],sum=0;
    string s;
    for (size_t i = 0; i < 4; i++)
    
      cin>>a[i];
    
    cin>>s;
    for (size_t i = 0; i < s.length(); i++)
    {
    
        if(s[i]=='1') {sum+=a[0];}
        else if(s[i]=='2')  sum+=a[1];
        else if(s[i]=='3')  sum+=a[2];
        else if(s[i]=='4')  sum+=a[3];    
      
    }
    cout<<sum<<endl;
    
    
 
  
}