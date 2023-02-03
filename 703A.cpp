//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
  lli test;
  cin>>test;

  lli m,c,mishka=0,chris=0;
  for (size_t i = 0; i < test; i++)
  {
    cin>>m>>c;

    if(m>c) mishka++;
    else if(m<c) chris++;


  } if(mishka>chris) cout<<"Mishka"<<endl;
  else if(mishka<chris) cout<<"Chris"<<endl;
  else cout<<"Friendship is magic!^^"<<endl;
  
 
  
}