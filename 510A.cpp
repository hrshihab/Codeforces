#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  for (size_t i = 1; i <= n; i++)
  {
    for (size_t j = 1; j <= m; j++)
    {
      if(i%4==0)
      {
        if(j==1) cout<<"#";
        else cout<<".";
      }
      else if(i%2==0)
      {
        if(j==m) cout<<"#";
        else cout<<".";
      }
      else cout<<"#";
    }
    cout<<endl;
    
  }
  

}