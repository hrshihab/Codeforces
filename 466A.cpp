#include<bits/stdc++.h>
using namespace std;
int main()
{
  double res=0,res2=0;
  long n,m,a,b;
  cin>>n>>m>>a>>b;
 double c = (float)b/m;
 
  if(a<=c) {res = n*a; }
  else{
    if((n % m)==0) res = n*c;
    else {
      res = ((n/m)*b) + ((n%m)*a);
      res2 = ((n/m+1)*b);
      if(res2<res) res = res2;
    }
  }
 cout<<fixed<<setprecision(0);
  cout<<res<<endl;
}