#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int a[m];
  for (size_t i = 0; i < m; i++)
  {
    cin>>a[i];
  }
  sort(a,a+m);
  int min = 99999;
  for (size_t i = 0; i < m-n+1; i++)
  {
      int res = a[i+n-1] - a[i] ;
      if(min>res) min = res;
  }
  cout<<min<<endl;
  
  
}