#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test,count=0;
  cin>>test;
  while(test--)
  {
    int p,q;
    cin>>p>>q;
    int res = q-p;
    if(res>1) count++;
  }
  cout<<count<<endl;
}