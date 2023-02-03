//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
  lli n,a,b,res,rem;
  cin>>n;
  if(n>=10) cout<<n<<endl;
  else{
       n = abs(n);
        res = n/10;
        rem = n%10;
        a = res ;
        res = res/10;
        b= (res*10)+rem;

        if(a<b) {if(a==0) cout<<a<<endl;
        else
        cout<<"-"<<a<<endl;}


        else {if(b==0) cout<<b<<endl;
        else
        cout<<"-"<<b<<endl;}

  }
  
 
  
}