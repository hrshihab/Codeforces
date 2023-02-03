//test
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test,n,i=0,even=0,odd=0,index=0,index2=0;
  cin>>test;
  while (test--)
  {
    cin>>n;
    ++i;
    if(n%2==0) {even++; index = i;}
    else {odd++; index2 = i;}
    
  }
  if(even>odd)
    {
      cout<<index2;
    }
    else cout<<index;
  
}