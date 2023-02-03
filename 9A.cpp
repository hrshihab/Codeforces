//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{

 lli a,b,max,res,div;
 cin>>a>>b;
 if(a>b) max = a;
 else max = b;

  res = 6-max+1;
  div = 6/res;
 if(6%res==0) cout<<"1/"<<div<<endl;
 else if(res==4) cout<<"2/3"<<endl;
 else cout<<"5/6"<<endl;
  
}