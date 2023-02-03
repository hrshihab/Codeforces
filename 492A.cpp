//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
  int n,tot=0;
  cin>>n;
  int sum = 0 , i = 1;
  while (tot<=n)
  {
    
    sum+=i;
    tot+=sum;
    if(tot<=n) i++;
       
  }
  cout<<i-1<<endl;
  
 
  
}